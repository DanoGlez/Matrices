#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>     // Necesario para std::setprecision
#include <Eigen/Dense> // Incluir la biblioteca Eigen para operaciones de matrices

using namespace std;
using namespace Eigen; // Usar el espacio de nombres de Eigen

int main()
{
    // Leer matriz al estilo MATLAB
    string input;
    cout << "Ingrese la matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
    getline(cin, input); // Leer toda la línea de entrada

    stringstream ss(input);
    string row;
    vector<vector<double>> tempMatriz;

    // Procesar cada fila separada por ';'
    while (getline(ss, row, ';'))
    {
        stringstream rowStream(row);
        vector<double> currentRow;
        double value;

        // Procesar cada valor separado por espacio en la fila
        while (rowStream >> value)
        {
            currentRow.push_back(value);
        }

        tempMatriz.push_back(currentRow);
    }

    // Convertir vector<vector<double>> a MatrixXd
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

    // Impresión de la matriz original
    cout << "La matriz ingresada es:\n"
         << matriz << "\n";
    cout << endl
         << endl;
    cout << "¿Desea mostrar la inversa de la matriz? (y/n): ";
    string check;
    cin >> check;

    // Calcular e imprimir la inversa de la matriz, si es posible
    if (check == "y" || check == "yes")
    {
        if (matriz.determinant() != 0)
        {
            MatrixXd inversa = matriz.inverse();

            // Ajustar la precisión y el formato de salida
            cout << "La inversa de la matriz es:\n";
            cout << fixed << setprecision(15); // Establece la precisión y el modo fijo
            for (int i = 0; i < inversa.rows(); i++)
            {
                for (int j = 0; j < inversa.cols(); j++)
                {
                    cout << inversa(i, j);
                    if (j != inversa.cols() - 1)
                        cout << " ";
                }
                cout << endl;
            }
            cout << scientific; // Restablece a formato científico por defecto
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
