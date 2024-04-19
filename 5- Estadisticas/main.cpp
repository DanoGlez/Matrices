#include <iostream>
#include <vector>
#include <random>
#include <Eigen/Dense>
#include <chrono>

using namespace std;
using namespace Eigen;
using namespace chrono;

// Función para imprimir matrices en formato científico
void printFormatted(const MatrixXd &matrix, const string &label)
{
    cout << label << ":\n";
    cout << matrix.format(Eigen::IOFormat(Eigen::FullPrecision, 0, ", ", ";\n", "[", "]", "[", "]")) << endl;
}

// Función para generar una matriz aleatoria de tamaño nxn
MatrixXd generateRandomMatrix(int n)
{
    MatrixXd m = MatrixXd::Random(n, n);
    return m;
}

int main()
{
    int operationsCount;
    string operationType;
    cout << "Ingrese las operaciones que desea realizar: ";
    cin >> operationsCount;
    cout << "¿Quieres calcular 'producto', 'inversa' o 'ambas'? ";
    cin >> operationType;

    auto start = high_resolution_clock::now();

    if (operationType == "producto" || operationType == "ambas")
    {
        for (int i = 0; i < operationsCount; i++)
        {
            int n = 3; // Tamaño de las matrices para el producto
            auto mA = generateRandomMatrix(n);
            auto mB = generateRandomMatrix(n);

            printFormatted(mA, "Matriz A (" + to_string(i + 1) + ")");
            printFormatted(mB, "Matriz B (" + to_string(i + 1) + ")");

            auto productStart = high_resolution_clock::now();
            MatrixXd product = mA * mB;
            auto productEnd = high_resolution_clock::now();
            auto productDuration = duration_cast<microseconds>(productEnd - productStart);

            printFormatted(product, "Producto (" + to_string(i + 1) + ")");
            cout << "Tiempo para el producto: " << productDuration.count() << " microsegundos.\n";
        }
    }

    if (operationType == "inversa" || operationType == "ambas")
    {
        for (int i = 0; i < operationsCount; i++)
        {
            int n = 3; // Tamaño de las matrices para la inversa
            auto m = generateRandomMatrix(n);

            printFormatted(m, "Matriz (" + to_string(i + 1) + ")");

            auto inverseStart = high_resolution_clock::now();
            MatrixXd inverse = m.inverse();
            auto inverseEnd = high_resolution_clock::now();
            auto inverseDuration = duration_cast<microseconds>(inverseEnd - inverseStart);

            printFormatted(inverse, "Inversa (" + to_string(i + 1) + ")");
            cout << "Tiempo para la inversa: " << inverseDuration.count() << " microsegundos.\n";
        }
    }

    auto end = high_resolution_clock::now();
    auto totalDuration = duration_cast<milliseconds>(end - start);

    cout << "Tiempo total para " << operationsCount << " operaciones de '" << operationType << "': " << totalDuration.count() << " milisegundos.\n";

    return 0;
}