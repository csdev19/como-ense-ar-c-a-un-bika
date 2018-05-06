# Condicionales (if-else)

- En la programacion comunmente se necesita condicionar las acciones que hace el programa bajo ciertos valores.
- Para esto sirven las estructuras if-else.
- Las estructuras condicionales if se ejecutan cuando la condicion con la que se crean es verdadera o **True**. Y cuando no se ejecuta el **if** se ejecuta el **else** (en caso que existan).
- ejemplo con dias de la semana:
```cpp
#include<iostream>

using namespace std;

int main() {
    int dias;
    // puede ser cualquier numero por dia
    dias = 5;
    if dias<=7 && dias >= 1 {
        cout<<"es un dia valido de la semana";
    }
    // y si ponemos un dia no valido ?
    // deberiamos usar el else
    else {
        cout<<"no es un dia de la semana";
    }

    return 0;
}

```

