#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    //LEER MATRIZ IGUAL QUE MATLAB
    string input;
    cout << "Ingrese la matriz (formato '1 2 3; 4 5 6; 7 8 9'): ";
    getline(cin, input);  // Leer toda la línea de entrada

    stringstream ss(input);
    string row;
    vector<vector<int>> matriz;
    
    // Procesar cada fila separada por ';'
    while (getline(ss, row, ';')) {
        stringstream rowStream(row);
        vector<int> currentRow;
        int value;

        // Procesar cada valor separado por espacio en la fila
        while (rowStream >> value) {
            currentRow.push_back(value);
        }

        matriz.push_back(currentRow);
    }

    // Impresión de la matriz
    cout << "La matriz ingresada es:\n";
    for (const auto& fila : matriz) {
        for (int elem : fila) {
            cout << elem << " ";
        }
        cout << "\n";
    }

    return 0;
}