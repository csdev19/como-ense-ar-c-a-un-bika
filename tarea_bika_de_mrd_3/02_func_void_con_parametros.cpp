#include <iostream>
using namespace std;

string nombre;

void saludo_para(string nombre_para_imprimir){
  cout << "Hola "<<nombre_para_imprimir<< " como estas"<<endl;
}

int main() {

  nombre = "cristian";
  saludo_para(nombre);

  // ahora la novedad es que le puedes mandar cualquier nombre y este imprimira el saludo
  cout << "ingrese nombre para el saludo";
  cin >> nombre;

  saludo_para(nombre);
}