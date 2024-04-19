# 👾 | Test de Matrices 

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
### 🗳️ | Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo `LICENSE` en este repositorio para más información.