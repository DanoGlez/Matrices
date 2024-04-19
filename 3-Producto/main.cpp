#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

void printFormatted(double value) {
    stringstream stream;
    stream << scientific << setprecision(16) << value;
    string s = stream.str();
    size_t epos = s.find('e');
    string mantissa = s.substr(0, epos);
    string exponent = s.substr(epos + 1);
    
    // Adjust the exponent to ensure it has a sign and three digits
    if (exponent[0] != '-') {
        exponent = "+" + exponent;
    }
    if (exponent.length() == 4) {  // e.g., e+08
        exponent.insert(2, "0");  // Adjust to e+008
    }

    cout << " " << mantissa << "e" << exponent;
}

vector<vector<double>> readMatrix() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string row;
    vector<vector<double>> tempMatriz;

    while (getline(ss, row, ';')) {
        stringstream rowStream(row);
        vector<double> currentRow;
        double value;
        while (rowStream >> value) {
            currentRow.push_back(value);
        }
        tempMatriz.push_back(currentRow);
    }
    return tempMatriz;
}

MatrixXd convertToEigen(const vector<vector<double>>& tempMatriz) {
    int filas = tempMatriz.size();
    int columnas = tempMatriz[0].size();
    MatrixXd matriz(filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz(i, j) = tempMatriz[i][j];
        }
    }
    return matriz;
}

int main() {
    cout << "Ingrese la primera matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
    auto matriz1 = convertToEigen(readMatrix());

    cout << "Ingrese la segunda matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
    auto matriz2 = convertToEigen(readMatrix());

    // Verificar la compatibilidad de las matrices para el producto
    if (matriz1.cols() != matriz2.rows()) {
        cout << "Error: las dimensiones de las matrices no permiten el producto." << endl;
        return 1;  // Finaliza el programa con un error
    }

    // Producto de matrices
    MatrixXd producto = matriz1 * matriz2;

    // Impresión de la matriz resultado
    cout << "El producto de las matrices es:\n";
    for (int i = 0; i < producto.rows(); i++) {
        for (int j = 0; j < producto.cols(); j++) {
            printFormatted(producto(i, j));
        }
        cout << endl;
    }

    return 0;
}