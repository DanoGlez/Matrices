#include <iostream>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

void testLeastSquares(size_t operationsCount, int rows, int colsA, int colsB)
{
    MatrixXd matA = MatrixXd::Random(rows, colsA);
    MatrixXd matB = MatrixXd::Random(rows, colsB);
    MatrixXd result(colsA, colsB); // Matriz para almacenar el resultado de la operación
    double dummy = 0.0;

    auto start = high_resolution_clock::now();

    for (size_t i = 0; i < operationsCount; ++i)
    {
        result = matA.colPivHouseholderQr().solve(matB);
        dummy += result.sum();
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start).count();

    cout << "Time for " << operationsCount << " least squares solutions (" << rows << "x" << colsA << " with " << rows << "x" << colsB << " B matrix): " << duration << " nanoseconds\n";
    cout << "Dummy output: " << dummy << endl;
}

int main()
{
    int rows, colsA, colsB;
    size_t totalMatrices = 1000000;

    cout << "Enter number of rows for matrix A and B: ";
    cin >> rows;
    cout << "Enter columns of matrix A: ";
    cin >> colsA;
    cout << "Enter columns of matrix B: ";
    cin >> colsB;

    testLeastSquares(totalMatrices, rows, colsA, colsB);

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
