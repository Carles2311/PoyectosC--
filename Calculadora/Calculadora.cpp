// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
    cout << "Entra el primer digito: ";
	cin >> x;
	cout << "Entra el segundo digito: ";
	cin >> y;
	if (y == 0) {
		cout << "entra un digito que no sea 0 para la division:";
		cin >> y;
	}
	cout << "Operaciones a realizar: \n";
	cout << "1. Suma: " << x+y << endl;
	cout << "2. Resta: " << x-y << endl;
	cout << "3. Multiplicacion: " << x*y << endl;
	cout << "4 Division: " << x/y <<endl;

}

