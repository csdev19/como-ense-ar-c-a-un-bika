#include <iostream>
using namespace std;

string nombre;

void imprimir_nombre_global() {
  nombre = "aqui cambio desde la funcion";
  cout<<nombre<<endl;
}

int main() {

  nombre = "hola como estas int main";
  cout<<nombre<<endl;
  imprimir_nombre_global();
  cout<<nombre<<endl;
}