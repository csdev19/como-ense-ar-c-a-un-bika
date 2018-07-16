#include <iostream>
using namespace std;

double factorial (int a){
	double acum =1;
	for (int i=1; i <= a; i++) {
		acum *= i;
	}
	return acum;
}

int main() {
	int base;
	double resultado;

	cout << "factorial de que numero quieres?" << endl;
	cin >> base;
	resultado = factorial(base);
	cout << resultado;
}