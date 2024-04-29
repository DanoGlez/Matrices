#include <iostream>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

void testMatrixMultiplication(size_t operationsCount, int rowsA, int colsA, int colsB)
{
    MatrixXd matA = MatrixXd::Random(rowsA, colsA);
    MatrixXd matB = MatrixXd::Random(colsA, colsB);
    MatrixXd result(rowsA, colsB);
    double dummy = 0.0;

    auto start = high_resolution_clock::now();

    for (size_t i = 0; i < operationsCount; ++i)
    {
        result.noalias() = matA * matB;
        dummy += result.sum();
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start).count();

    cout << "Time for " << operationsCount << " matrix multiplications (" << rowsA << "x" << colsA << " * " << colsA << "x" << colsB << "): " << duration << " nanoseconds\n";
    cout << "Dummy output: " << dummy << endl;
}

int main()
{
    int rowsA, colsA, colsB;
    size_t totalMatrices = 1000000;

    cout << "Enter rows of matrix A: ";
    cin >> rowsA;
    cout << "Enter columns of matrix A (also rows of matrix B): ";
    cin >> colsA;
    cout << "Enter columns of matrix B: ";
    cin >> colsB;

    testMatrixMultiplication(totalMatrices, rowsA, colsA, colsB);

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
