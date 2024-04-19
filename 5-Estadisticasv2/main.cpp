#include <iostream>
#include <vector>
#include <random>
#include <Eigen/Dense>
#include <chrono>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <windows.h>  // Use Windows API for filesystem operations

using namespace std;
using namespace Eigen;
using namespace chrono;

// Function to print matrices in scientific format and return as string
string formatMatrix(const MatrixXd &matrix, const string &label) {
    stringstream ss;
    ss << label << ":\n";
    ss << matrix.format(Eigen::IOFormat(Eigen::FullPrecision, 0, ", ", ";\n", "[", "]", "[", "]")) << "\n";
    return ss.str();
}

// Function to generate a random matrix of size nxn
MatrixXd generateRandomMatrix(int n) {
    MatrixXd m = MatrixXd::Random(n, n);
    return m;
}

string getCurrentDateTime() {
    SYSTEMTIME st;
    GetLocalTime(&st);
    char buffer[80];
    sprintf(buffer, "%02d%02d%04d%02d%02d%02d", st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond);
    return string(buffer);
}

// Function to check if a directory exists and create it if it doesn't
bool verifyOrCreateDirectory(const string &path) {
    DWORD ftyp = GetFileAttributesA(path.c_str());
    if (ftyp == INVALID_FILE_ATTRIBUTES) {
        // Directory does not exist, attempt to create it
        return CreateDirectoryA(path.c_str(), NULL) != 0;
    }
    return (ftyp & FILE_ATTRIBUTE_DIRECTORY) != 0;
}

int main() {
    int operationsCount;
    string operationType;
    cout << "Ingrese las operaciones que desea realizar: ";
    cin >> operationsCount;
    cout << "¿Quieres calcular 'producto', 'inversa' o 'ambas'? ";
    cin >> operationType;

    string directoryPath = "5-Estadisticas/Resultados";
    if (!verifyOrCreateDirectory(directoryPath)) {
        cerr << "Failed to create directory: " << directoryPath << endl;
        return 1;
    }

    ofstream outFile(directoryPath + "/" + getCurrentDateTime() + ".json");
    if (!outFile.is_open()) {
        cerr << "Error al abrir el archivo de salida." << endl;
        return 1;
    }

    auto start = high_resolution_clock::now();

    // Remaining implementation for matrix operations
    outFile.close();
    return 0;
}
