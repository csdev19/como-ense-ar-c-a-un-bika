# Tipos de datos de variables en c++

## Links
- [variable-types](https://www.tutorialspoint.com/cplusplus/cpp_variable_types.htm)
- [data-types](https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm)
- 

## Contenido

- Las variables son espacios de memoria que se crean para almacenar informacion.
- Esta informacion puede ser de varios tipos: numerico entero, numerico decimal, cadenas de texto, entres otras.
- En C++ como otros lenguajes de tipado fuerte. Necesita que al momento de declarar una variable (espacio de memoria) se le asigne un tipo de dato en especifico.
- Y por eso la declaracion de una variable en c++ es:
    ```cpp
    <tipo-de-dato> <nombre-de-la-variables>;
    ```
- Una funcion que tiene c++ para ver el tamaño de los tipos de datos, para poder experimentar:
    ```cpp
    #include<iostream>

    int main() {
        // nos devuelve el numero de bytes que necesita cada variable
        std :: cout << "Size of "<< sizeof(<tipo-de-dato>)<< endl;
        return 0
    }
    ```
- Cada variable al ser inicializada tiene un **valor zero** -> [lista de valor inicial](https://www.tutorialspoint.com/cplusplus/cpp_variable_scope.htm)

