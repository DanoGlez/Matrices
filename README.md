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

### 📁 | Carpeta Estadísticas

Este programa en C++ está diseñado para evaluar el rendimiento de operaciones matemáticas como el producto de matrices y la inversa de matrices. Permite al usuario especificar cuántas operaciones realizar y si desea calcular el producto, la inversa, o ambos, usando matrices generadas aleatoriamente.

### Características

- **Generación Automática de Matrices:** Crea matrices aleatorias para las operaciones especificadas, asegurando una amplia variabilidad en los casos de prueba.
- **Operaciones Diversificadas:** Permite al usuario optar por calcular el producto, la inversa, o ambos para las matrices generadas.
- **Reporte Detallado:** Proporciona información detallada sobre cada matriz y resultado, incluyendo tiempos de ejecución para cada operación individual y un resumen del tiempo total.

### Requisitos

Para compilar y ejecutar este programa, necesitarás:

- **Compilador C++:** Un compilador que soporte C++11 o superior (como g++).
- **Biblioteca Eigen:** Utilizada para operaciones de matrices. Asegúrate de tenerla instalada y correctamente configurada en tu entorno de desarrollo.
- **Librería `<chrono>`:** Para medición de tiempos de ejecución.
- **Librería `<random>`:** Para la generación de matrices aleatorias.

### Compilación

El programa debe compilarse con acceso a la biblioteca Eigen. Aquí te dejo el comando típico de compilación que puedes usar en una terminal:

```bash
g++ -o matriz_estadisticas main.cpp -I /path/to/eigen
```

Reemplaza `/path/to/eigen` con la ruta actual al directorio que contiene los headers de Eigen en tu sistema.

### Ejecución

Para ejecutar el programa, utiliza el siguiente comando en la terminal:

```bash
./matriz_estadisticas
```

Este comando inicia el programa, que luego te pedirá que ingreses los datos necesarios para proceder con las operaciones matemáticas.

### Cómo Usar el Programa

1. **Número de Operaciones:**
   - Ingresa el número total de operaciones que deseas realizar.

2. **Tipo de Operación:**
   - Especifica el tipo de operación: `producto`, `inversa`, o `ambas`.

### Ejemplo de Entrada

```plaintext
Ingrese cuántas operaciones desea realizar: 10
¿Desea calcular 'producto', 'inversa' o 'ambas'? ambas
```

### Ejemplo de Salida

La salida incluirá las matrices utilizadas, sus productos o inversas, y los tiempos de cálculo:

```plaintext
Matriz A (1):
[1.23456789012345e+000, 2.34567890123456e+000, 3.45678901234567e+000;
 4.56789012345678e+000, 5.67890123456789e+000, 6.78901234567890e+000;
 7.89012345678901e+000, 8.90123456789012e+000, 9.01234567890123e+000]

Producto (1):
[3.00000000000000e+001, 2.40000000000000e+001, 1.80000000000000e+001;
 8.40000000000000e+001, 6.90000000000000e+001, 5.40000000000000e+001;
 1.38000000000000e+002, 1.14000000000000e+002, 9.00000000000000e+001]

Tiempo para el producto: 123456 microsegundos.

Inversa (1):
[-3.00000000000000e+001, 6.00000000000000e+001, -3.00000000000000e+001;
 6.00000000000000e+001, -1.20000000000000e+002, 6.00000000000000e+001;
 -3.00000000000000e+001, 6.00000000000000e

+001, -3.00000000000000e+001]

Tiempo para la inversa: 654321 microsegundos.

Tiempo total para 10 operaciones de 'ambas': 20 segundos.
```

---

### 🗳️ | Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo [`LICENSE`](LICENSE) en este repositorio para más información.