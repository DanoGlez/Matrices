#include <iostream>
#include <vector>
#include <random>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

// Function to print matrices in scientific format
void printFormatted(const MatrixXd &matrix, const string &label)
{
    cout << label << ":\n";
    cout << matrix.format(Eigen::IOFormat(Eigen::FullPrecision, 0, ", ", ";\n", "[", "]", "[", "]")) << endl;
}

// Function to generate a random matrix of size nxn
MatrixXd generateRandomMatrix(int n)
{
    MatrixXd m = MatrixXd::Random(n, n);
    return m;
}

int main()
{
    int operationsCount;
    string operationType;
    cout << "Enter the number of operations you wish to perform: ";
    cin >> operationsCount;
    cout << "Do you want to calculate 'product', 'inverse' or 'both'? ";
    cin >> operationType;

    // Pre-generate matrices
    vector<MatrixXd> matricesA, matricesB;
    int n = 50; // Size of the matrices
    for (int i = 0; i < operationsCount; i++)
    {
        matricesA.push_back(generateRandomMatrix(n));
        if (operationType != "inverse")
        { // Only generate second matrix for product or both
            matricesB.push_back(generateRandomMatrix(n));
        }
    }

    auto start = high_resolution_clock::now();

    if (operationType == "product" || operationType == "both")
    {
        for (int i = 0; i < operationsCount; i++)
        {
            /*
            printFormatted(matricesA[i], "Matrix A (" + to_string(i + 1) + ")");
            printFormatted(matricesB[i], "Matrix B (" + to_string(i + 1) + ")");
            */
            auto productStart = high_resolution_clock::now();
            MatrixXd product = matricesA[i] * matricesB[i];
            auto productEnd = high_resolution_clock::now();
            auto productDuration = duration_cast<microseconds>(productEnd - productStart);
            /*
            printFormatted(product, "Product (" + to_string(i + 1) + ")");
            cout << "Time for product: " << productDuration.count() << " microseconds.\n";
            */
        }
    }

    if (operationType == "inverse" || operationType == "both")
    {
        for (int i = 0; i < operationsCount; i++)
        {
            // printFormatted(matricesA[i], "Matrix (" + to_string(i + 1) + ")");

            auto inverseStart = high_resolution_clock::now();
            MatrixXd inverse = matricesA[i].inverse();
            auto inverseEnd = high_resolution_clock::now();
            auto inverseDuration = duration_cast<nanoseconds>(inverseEnd - inverseStart);

            // printFormatted(inverse, "Inverse (" + to_string(i + 1) + ")");
            // cout << "Time for inverse: " << inverseDuration.count() << " nanoseconds.\n";
        }
    }

    auto end = high_resolution_clock::now();
    auto totalDuration = duration_cast<milliseconds>(end - start);

    cout << "Total time for " << operationsCount << " operations of '" << operationType << "': " << totalDuration.count() << " milliseconds.\n";

    return 0;
}
