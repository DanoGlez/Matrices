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
    if (exponent.length() == 4) // e.g., e+08
    {
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
    vector<vector<double>> tempMatrix;

    while (getline(ss, row, ';'))
    {
        stringstream rowStream(row);
        vector<double> currentRow;
        double value;
        while (rowStream >> value)
        {
            currentRow.push_back(value);
        }
        tempMatrix.push_back(currentRow);
    }

    if (tempMatrix.empty() || tempMatrix.size() != tempMatrix[0].size())
    {
        cout << "La matriz debe ser cuadrada y no vacía.\n";
        return 1;
    }

    int rows = tempMatrix.size();
    int columns = tempMatrix[0].size();
    MatrixXd matrix(rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix(i, j) = tempMatrix[i][j];
        }
    }

    cout << "La matriz ingresada es:\n";
    for (int i = 0; i < matrix.rows(); i++)
    {
        for (int j = 0; j < matrix.cols(); j++)
        {
            printFormatted(matrix(i, j));
        }
        cout << endl;
    }

    string check;
    cout << "¿Desea calcular la inversa de la matriz? (y/n): ";
    cin >> check;

    if (check == "y" || check == "yes")
    {
        if (matrix.determinant() != 0)
        {
            MatrixXd inverse = matrix.inverse();
            cout << "La inversa de la matriz es:\n";
            for (int i = 0; i < inverse.rows(); i++)
            {
                for (int j = 0; j < inverse.cols(); j++)
                {
                    printFormatted(inverse(i, j));
                }
                cout << endl;
            }

            cout << "¿Desea calcular el producto de la matriz con su inversa? (y/n): ";
            cin >> check;
            if (check == "y" || check == "yes")
            {
                MatrixXd product = matrix * inverse;
                cout << "El producto de la matriz por su inversa es:\n";
                for (int i = 0; i < product.rows(); i++)
                {
                    for (int j = 0; j < product.cols(); j++)
                    {
                        printFormatted(product(i, j));
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "Operación cancelada por el usuario.\n";
            }
        }
        else
        {
            cout << "La matriz no es invertible (determinante es cero).\n";
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