#include <iostream>
using namespace std;

int numero_1, numero_2;

int suma(){
  int resultado;
  resultado = numero_1 + numero_2;
  return resultado ;
}

int main() {
  int para_imprimir;

  numero_1 = 23;
  numero_2 = 10;
  
  // ahora no le mandamos parametros
  para_imprimir = suma();
  cout << para_imprimir;
}