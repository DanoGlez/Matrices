#include <iostream>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

void testMatrixMultiplication(size_t operationsCount, int rowsA, int colsA, int colsB)
{
    MatrixXd matA = MatrixXd::Random(rowsA, colsA); // Inicializa una vez fuera del bucle
    MatrixXd matB = MatrixXd::Random(colsA, colsB); // Inicializa una vez fuera del bucle
    MatrixXd result(rowsA, colsB);                 // Preallocate the result matrix
    double dummy = 0.0;

    auto start = high_resolution_clock::now();

    for (size_t i = 0; i < operationsCount; ++i)
    {
        result.noalias() = matA * matB;            // Use noalias to assert no aliasing issues
        dummy += result.sum();                     // Sum to prevent optimization away
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start).count();

    cout << "Time for " << operationsCount << " matrix multiplications (" << rowsA << "x" << colsA << " * " << colsA << "x" << colsB << "): " << duration << " microseconds\n";
    cout << "Dummy output: " << dummy << endl; // To ensure 'dummy' is used
}

int main()
{
    int rowsA, colsA, colsB;
    size_t totalMatrices = 1000000; // Total number of multiplications to process

    cout << "Enter rows of matrix A: ";
    cin >> rowsA;
    cout << "Enter columns of matrix A (also rows of matrix B): ";
    cin >> colsA;
    cout << "Enter columns of matrix B: ";  
    cin >> colsB;

    try
    {
        testMatrixMultiplication(totalMatrices, rowsA, colsA, colsB);
    }
    catch (const std::exception &e)
    {
        cerr << "Exception: " << e.what() << '\n';
        return 1;
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // Clears the newline character left in the input buffer
    cin.get();
    return 0;
}
