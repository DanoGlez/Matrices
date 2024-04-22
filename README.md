# 👾 | Test de Matrices

---

## 📁 | Carpeta Read

Este programa en C++ permite leer una matriz del usuario en un formato similar al usado en MATLAB, donde las filas están separadas por punto y coma (`;`) y los elementos de cada fila están separados por espacios. Luego, imprime la matriz ingresada en la consola.

### Características

- **Entrada Flexible:** El usuario puede ingresar matrices de cualquier tamaño, siempre que sigan el formato correcto.
- **Formato MATLAB-Like:** Las matrices deben ingresarse en una línea, usando `;` para separar filas.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o matriz_reader main.cpp
```

Esto compilará `main.cpp` y generará un ejecutable llamado `matriz_reader`.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./matriz_reader
```

Después de ejecutar el comando, se te pedirá que ingreses una matriz. Aquí tienes un ejemplo de cómo deberías ingresar la matriz:

```
Ingrese la matriz (formato '1 2 3; 4 5 6; 7 8 9'): 1 2 3; 4 5 6; 7 8 9
```

### Salida Esperada

Dado el ejemplo de entrada anterior, la salida del programa será:

```
La matriz ingresada es:
1 2 3
4 5 6
7 8 9
```

---

### 📁 | Carpeta Inversa

Este programa en C++ permite leer una matriz del usuario en un formato similar al utilizado en MATLAB, donde las filas están separadas por punto y coma (;) y los elementos de cada fila están separados por espacios. Si el usuario lo desea, el programa calcula y muestra la inversa de esta matriz.

s### Características

- **Entrada Flexible:** El usuario puede ingresar matrices de cualquier tamaño que sigan el formato correcto.
- **Formato MATLAB-Like:** Las matrices deben ingresarse en una línea, usando `;` para separar filas.
- **Cálculo de Inversa:** Calcula y muestra la inversa de la matriz ingresada, si es invertible.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.
- La biblioteca Eigen para operaciones de matrices.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o matriz_inversa main.cpp -I /path/to/eigen
```

Esto compilará `main.cpp` y generará un ejecutable llamado `matriz_inversa`. Asegúrate de reemplazar `/path/to/eigen` con la ruta real donde está instalada la biblioteca Eigen en tu sistema.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./matriz_inversa
```

Después de ejecutar el comando, se te pedirá que ingreses una matriz. Aquí tienes un ejemplo de cómo deberías ingresar la matriz:

```
Ingrese la matriz (formato '1 2 3; 4 5 6; 7 8 9'): 1 2 3; 4 5 6; 7 8 9
```

### Salida Esperada

Dado el ejemplo de entrada anterior, la salida del programa, si la matriz es invertible, será similar a:

```
La matriz ingresada es:
1.00000000000000e+000 2.00000000000000e+000 3.00000000000000e+000
4.00000000000000e+000 5.00000000000000e+000 6.00000000000000e+000
7.00000000000000e+000 8.00000000000000e+000 9.00000000000000e+000

¿Desea mostrar la inversa de la matriz? (y/n): y
La inversa de la matriz es:
-3.00000000000000e+001 6.00000000000000e+001 -3.00000000000000e+001
6.00000000000000e+001 -1.20000000000000e+002 6.00000000000000e+001
-3.00000000000000e+001 6.00000000000000e+001 -3.00000000000000e+001
```

Si la matriz no es invertible, mostrará un error:

```
La matriz no es invertible (determinante es cero).
```

---

### 📁 | Carpeta Producto

Este programa en C++ permite leer dos matrices del usuario en un formato similar al usado en MATLAB, donde las filas están separadas por punto y coma (;) y los elementos de cada fila están separados por espacios. Luego, si el usuario lo desea, calcula y muestra el producto de estas matrices.

### Características

- **Entrada Flexible:** El usuario puede ingresar matrices de cualquier tamaño, siempre que sigan el formato correcto y sean compatibles para el producto.
- **Formato MATLAB-Like:** Las matrices deben ingresarse en una línea, usando `;` para separar filas.
- **Producto de Matrices:** Calcula el producto de dos matrices ingresadas si sus dimensiones son compatibles.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.
- La biblioteca Eigen para operaciones de matrices.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o matriz_producto main.cpp -I /path/to/eigen
```

Esto compilará `main.cpp` y generará un ejecutable llamado `matriz_producto`. Asegúrate de reemplazar `/path/to/eigen` con la ruta real donde está instalada la biblioteca [Eigen](https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.zip) en tu sistema.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./matriz_producto
```

Después de ejecutar el comando, se te pedirá que ingreses dos matrices. Aquí tienes un ejemplo de cómo deberías ingresar las matrices:

```
Ingrese la primera matriz (formato '1 2 3; 4 5 6; 7 8 9'): 1 2 3; 4 5 6; 7 8 9
Ingrese la segunda matriz (formato '1 2 3; 4 5 6; 7 8 9'): 9 8 7; 6 5 4; 3 2 1
```

### Salida Esperada

Dado el ejemplo de entrada anterior, si las dimensiones son compatibles, la salida del programa será:

```
El producto de las matrices es:
 3.00000000000000e+001 2.40000000000000e+001 1.80000000000000e+001
 8.40000000000000e+001 6.90000000000000e+001 5.40000000000000e+001
 1.38000000000000e+002 1.14000000000000e+002 9.00000000000000e+001
```

Si las dimensiones no son compatibles para el producto, mostrará un error:

```
Error: las dimensiones de las matrices no permiten el producto.
```

---

### 📁 | Carpeta Compleja

Este programa en C++ permite leer dos matrices del usuario en un formato similar al utilizado en MATLAB, donde las filas están separadas por punto y coma (;) y los elementos de cada fila están separados por espacios. Posteriormente, ofrece la opción de calcular y mostrar el producto de estas matrices y/o la inversa de la primera matriz, si el usuario así lo desea.


### Características

- **Entrada Flexible:** El usuario puede ingresar matrices de cualquier tamaño, siempre que sigan el formato correcto y sean compatibles para el producto o la inversa.
- **Formato MATLAB-Like:** Las matrices deben ingresarse en una línea, usando `;` para separar filas.
- **Producto de Matrices:** Calcula el producto de dos matrices ingresadas si sus dimensiones son compatibles.
- **Cálculo de Inversa:** Ofrece calcular y mostrar la inversa de la primera matriz ingresada si es invertible.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.
- La biblioteca Eigen para operaciones de matrices.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o matriz_compleja main.cpp -I /path/to/eigen
```

Este comando compilará `main.cpp` y generará un ejecutable llamado `matriz_compleja`. Asegúrate de reemplazar `/path/to/eigen` con la ruta real donde está instalada la biblioteca Eigen en tu sistema.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./matriz_compleja
```

Después de ejecutar el comando, se te pedirá que ingreses dos matrices (si deseas realizar un producto de matrices). Aquí tienes un ejemplo de cómo deberías ingresar las matrices:

```
Ingrese la primera matriz (formato '1 2 3; 4 5 6; 7 8 9'): 1 2 3; 4 5 6; 7 8 9
Ingrese la segunda matriz (formato '1 2 3; 4 5 6; 7 8 9'): 9 8 7; 6 5 4; 3 2 1
```

### Salida Esperada

Dado el ejemplo de entrada anterior, si las dimensiones son compatibles, la salida del programa será:

```
El producto de las matrices es:
 3.00000000000000e+001 2.40000000000000e+001 1.80000000000000e+001
 8.40000000000000e+001 6.90000000000000e+001 5.40000000000000e+001
 1.38000000000000e+002 1.14000000000000e+002 9.00000000000000e+001
```

Si se decide calcular la inversa y la matriz es invertible, se mostrará algo similar a:

```
La inversa de la primera matriz es:
-3.00000000000000e+001 6.00000000000000e+001 -3.00000000000000e+001
 6.00000000000000e+001 -1.20000000000000e+002 6.00000000000000e+001
-3.00000000000000e+001 6.00000000000000e+001 -3.00000000000000e+001
```

Si la matriz no es invertible, se mostrará un error:

```
La matriz no es invertible (determinante es cero).
```

---

### 📁 | Carpeta Estadística Inversa

Este programa en C++ evalúa el tiempo necesario para calcular la inversa de matrices cuadradas aleatorias de tamaño \( N x N \). Utiliza la biblioteca Eigen para realizar las operaciones de inversión y mide el tiempo de ejecución utilizando la librería `chrono`.

### Características

- **Eficiencia en el Tiempo:** Mide el tiempo requerido para calcular la inversa de matrices de diferentes tamaños.
- **Operaciones Masivas:** Puede procesar un gran número de matrices para evaluar el rendimiento en un escenario de uso intensivo.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.
- La biblioteca Eigen para operaciones de matrices.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o estadistica_inversa main.cpp -I /path/to/eigen
```

Este comando compilará `main.cpp` y generará un ejecutable llamado `estadistica_inversa`. Asegúrate de reemplazar `/path/to/eigen` con la ruta real donde está instalada la biblioteca Eigen en tu sistema.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./estadistica_inversa
```

Después de ejecutar el comando, se te pedirá que ingreses el tamaño de la matriz (N para matrices \( N x N \)). El programa ejecutará el cálculo de inversión para matrices de ese tamaño y mostrará el tiempo de ejecución.

### Salida Esperada

La salida del programa mostrará el tiempo necesario para calcular la inversa de un gran número de matrices de tamaño \( N x N \), así como una salida dummy para asegurar que los resultados no sean optimizados por el compilador.

```
Enter the size of the matrix (N for NxN): 3
Testing size 3 with 1000000 matrices.
Time for 1000000 3x3 matrix inversions: 123456 microseconds
Dummy output: -0.12345
Press Enter to exit...
```

Esto indica que el cálculo de la inversa de matrices \( 3 x 3 \) tomó aproximadamente 123456 microsegundos, y muestra una salida dummy para evitar la optimización del compilador.

---

### 📁 | Carpeta Estadística Producto

Este programa en C++ evalúa el tiempo necesario para realizar multiplicaciones de matrices aleatorias de tamaño \( A x B \) y \( B x C \). Utiliza la biblioteca Eigen para las operaciones de matriz y mide el tiempo de ejecución utilizando la librería `chrono`.

### Características

- **Eficiencia en el Tiempo:** Mide el tiempo requerido para realizar un gran número de multiplicaciones de matrices de diferentes tamaños.
- **Operaciones Masivas:** Puede procesar un gran número de multiplicaciones de matrices para evaluar el rendimiento en un escenario de uso intensivo.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ que soporte C++11 o superior (como g++).
- Acceso a una terminal o línea de comandos.
- La biblioteca Eigen para operaciones de matrices.

### Compilación

Para compilar el programa, puedes usar el siguiente comando en tu terminal:

```bash
g++ -o estadistica_producto main.cpp -I /path/to/eigen
```

Este comando compilará `main.cpp` y generará un ejecutable llamado `estadistica_producto`. Asegúrate de reemplazar `/path/to/eigen` con la ruta real donde está instalada la biblioteca Eigen en tu sistema.

### Ejecución

Para ejecutar el programa, simplemente escribe el siguiente comando en la terminal:

```bash
./estadistica_producto
```

Después de ejecutar el comando, se te pedirá que ingreses las dimensiones de las matrices \( A \), \( B \) y \( C \) (para matrices \( A x B \) y \( B x C \)). El programa ejecutará las multiplicaciones de matrices con esas dimensiones y mostrará el tiempo de ejecución.

### Salida Esperada

La salida del programa mostrará el tiempo necesario para realizar un gran número de multiplicaciones de matrices con las dimensiones especificadas, así como una salida dummy para asegurar que los resultados no sean optimizados por el compilador.

```
Enter rows of matrix A: 3
Enter columns of matrix A (also rows of matrix B): 4
Enter columns of matrix B: 2
Time for 1000000 matrix multiplications (3x4 * 4x2): 123456 microseconds
Dummy output: -0.12345
Press Enter to exit...
```

Esto indica que el cálculo de la multiplicación de matrices \( 3 x 4 \) y \( 4 x 2 \) tomó aproximadamente 123456 microsegundos, y muestra una salida dummy para evitar la optimización del compilador.

---

### 🗳️ | Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo [`LICENSE`](LICENSE) en este repositorio para más información.