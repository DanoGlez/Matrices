# 👾 | Test de Matrices 

Este programa en C++ permite leer una matriz del usuario en un formato similar al usado en MATLAB, donde las filas están separadas por punto y coma (`;`) y los elementos de cada fila están separados por espacios. Luego, imprime la matriz ingresada en la consola.

## 📁 | Carpeta Read 

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

### Características

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
### 📁 | Carpeta Todo

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
### 🗳️ | Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo [`LICENSE`](LICENSE) en este repositorio para más información.