# Las constantes

- La particularidad de las constantes es que una vez declaradas no pueden cambiar de valor.
- En c++ las constantes tienen un tipo especial de declaracion con el **operador #** y tambien con la palabra reservada **const**.
    ```cpp
    #include<iostream>
    using namespace std;

    // con define
    #define PI 3.14

    int main(){
        const int PI = 3.14; // con const
        return 0;
    }
    ```
