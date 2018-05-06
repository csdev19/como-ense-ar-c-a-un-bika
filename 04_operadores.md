# Operadores

## Link [operadores](https://www.tutorialspoint.com/cplusplus/cpp_operators.htm)

Esta vez no dire operadores en C++ exclusivamente porque varios de estos se repiten en otros lenguajes.

- Operadores de asignacion: Es el cual se usa para **asignar** un valor a una variable -> **=**. Para entender esto se tiene que considerar que la maquina "lee" de derecha a izquierda
```cpp
#include<iostream>

using namespace std;

int main(){
    int numero, numero2;
    int result = 12;
    char caracter;
    float decimal;
    double decimal_exacto;


    // como se puede ver el operador = asigna valores a las variables
    numero = 80;
    numero2 = 53;
    caracter = 'h';
    decimal = 4.7;
    double = 5.37;

    // tambien se puede usar
    // += -= *= /=
    //result = result + 3 // es lo mismo que
    result += 3;


    return 0;
}
```
- Existen operadores aritmeticos: **+ - / * % ++ --**
```cpp
#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 4;
    int suma, resta, multiplicacion, division, resto, incremento, decremento;

    suma = a + b; // 14
    resta = a - b; // 6
    multiplicacion = a * b ;// 40
    division = a / b; // 2,5 pero truncado porque es un int osea 2
    resto = a % b ; // 2 el resto de dividir 10 / 4
    incremento = a++; // 11 porque es a + 1
    decremento = b--; // 3 porque es b - 1

    return 0;
}
```
- Operadores relacionales: Nos devuelven valores booleanos **true/false**. Una particularidad en c++ es que cuando imprimes un valor booleano con **cout** devuelve 1(true) o 0(false)
```cpp
#include<iostream>

using namespace std;

int main(){
    int a = 42;
    int b = 23;
    // descomentalo en caso quieras probar
    //bool verdad = true, falso = false;
    // cout << verdad;
    // cout << falso

    // para usar los operadores debes usar ()
    cout << (a == b);
    cout << (a != b);
    cout << (a > b);
    cout << (a >= b);
    cout << (a < b);
    cout << (a <= b);

    return 0;
}
```
- Operadores logicos: al igual que los relacionales devuelven valores booleanos **(true/false)**, pero debes enviarle valor booleanos.
```cpp
#include<iostream>

using namespace std;

int main() {

    bool verdad = true, falso = false;

    // si te das cuenta esto es la tabla de verdad
    cout << (verdad && falso);
    cout << (verdad || falso);
    cout << (!verdad);
    cout << (!falso);
    cout << (verdad && !falso);
    cout << (verdad || !falso);

    return 0;
}
```

- Misc operators : en el link estan


