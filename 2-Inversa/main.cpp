#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

void printFormatted(double value)
{
    stringstream stream;
    stream << scientific << setprecision(16) << value;
    string s = stream.str();
    size_t epos = s.find('e');
    string mantissa = s.substr(0, epos);
    string exponent = s.substr(epos + 1);

    // Adjust the exponent to ensure it has a sign and three digits
    if (exponent[0] != '-')
    {
        exponent = "+" + exponent;
    }
    if (exponent.length() == 4)
    {                            // e.g., e+08
        exponent.insert(2, "0"); // Adjust to e+008
    }

    cout << " " << mantissa << "e" << exponent;
}

int main()
{
    string input;
    cout << "Ingrese la matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
    getline(cin, input);

    stringstream ss(input);
    string row;
    vector<vector<double>> tempMatriz;

    while (getline(ss, row, ';'))
    {
        stringstream rowStream(row);
        vector<double> currentRow;
        double value;
        while (rowStream >> value)
        {
            currentRow.push_back(value);
        }
        tempMatriz.push_back(currentRow);
    }

    int filas = tempMatriz.size();
    int columnas = tempMatriz[0].size();
    MatrixXd matriz(filas, columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz(i, j) = tempMatriz[i][j];
        }
    }

    cout << "La matriz ingresada es:\n";
    for (int i = 0; i < matriz.rows(); i++)
    {
        for (int j = 0; j < matriz.cols(); j++)
        {
            printFormatted(matriz(i, j));
        }
        cout << endl;
    }

    cout << endl
         << "¿Desea mostrar la inversa de la matriz? (y/n): ";
    string check;
    cin >> check;

    if (check == "y" || check == "yes")
    {
        if (matriz.determinant() != 0)
        {
            MatrixXd inversa = matriz.inverse();
            cout << "La inversa de la matriz es:\n";
            for (int i = 0; i < inversa.rows(); i++)
            {
                for (int j = 0; j < inversa.cols(); j++)
                {
                    printFormatted(inversa(i, j));
                }
                cout << endl;
            }
        }
        else
        {
            cout << "La matriz no es invertible (determinante es cero)." << endl;
        }
    }
    else if (check == "n" || check == "no")
    {
        cout << "Operación cancelada por el usuario.\n";
    }
    else
    {
        cout << "Entrada no reconocida. Operación cancelada.\n";
    }

    return 0;
}