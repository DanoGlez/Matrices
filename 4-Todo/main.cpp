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

    cout << "La primera matriz ingresada es:\n";
    for (int i = 0; i < matriz1.rows(); i++) {
        for (int j = 0; j < matriz1.cols(); j++) {
            printFormatted(matriz1(i, j));
        }
        cout << endl;
    }

    cout << "¿Desea ingresar una segunda matriz para producto? (y/n): ";
    string productCheck;
    cin >> productCheck;

    if (productCheck == "y" || productCheck == "yes") {
        cout << "Ingrese la segunda matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
        cin.ignore(); // Ignore the newline character left in the input buffer
        auto matriz2 = convertToEigen(readMatrix());

        if (matriz1.cols() != matriz2.rows()) {
            cout << "Error: las dimensiones de las matrices no permiten el producto." << endl;
        } else {
            MatrixXd producto = matriz1 * matriz2;
            cout << "El producto de las matrices es:\n";
            for (int i = 0; i < producto.rows(); i++) {
                for (int j = 0; j < producto.cols(); j++) {
                    printFormatted(producto(i, j));
                }
                cout << endl;
            }
        }
    }

    cout << "¿Desea mostrar la inversa de la primera matriz? (y/n): ";
    string inverseCheck;
    cin >> inverseCheck;

    if (inverseCheck == "y" || inverseCheck == "yes") {
        if (matriz1.determinant() != 0) {
            MatrixXd inversa = matriz1.inverse();
            cout << "La inversa de la primera matriz es:\n";
            for (int i = 0; i < inversa.rows(); i++) {
                for (int j = 0; j < inversa.cols(); j++) {
                    printFormatted(inversa(i, j));
                }
                cout << endl;
            }
        } else {
            cout << "La matriz no es invertible (determinante es cero)." << endl;
        }
    } else if (inverseCheck == "n" || inverseCheck == "no") {
        cout << "Operación cancelada por el usuario.\n";
    }

    return 0;
}
