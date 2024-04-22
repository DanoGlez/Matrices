#include <iostream>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

void testMatrixInversion(int N, size_t operationsCount)
{
    volatile double dummy = 0.0;
    auto start = high_resolution_clock::now();

    for (size_t i = 0; i < operationsCount; ++i)
    {
        MatrixXd mat = MatrixXd::Random(N, N); // Create a NxN matrix with random elements
        MatrixXd inverse = mat.inverse();      // Compute the inverse of the matrix
        dummy += inverse.sum();                // Use the result to prevent optimization
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start).count();
    cout << "Time for " << operationsCount << " " << N << "x" << N << " matrix inversions: " << duration << " microseconds\n";
    cout << "Dummy output: " << dummy << endl; // To ensure 'dummy' is used
}

int main()
{
    size_t totalMatrices = 1000000; // Total number of matrices to process
    int matrixSize;

    cout << "Enter the size of the matrix (N for NxN): ";
    cin >> matrixSize;

    cout << "Testing size " << matrixSize << " with " << totalMatrices << " matrices.\n";
    try
    {
        testMatrixInversion(matrixSize, totalMatrices);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // To consume the newline left in the input buffer
    cin.get();
    return 0;
}
