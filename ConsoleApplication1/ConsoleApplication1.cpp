#include <iostream>
#include <cmath>
using namespace std;

double a, b, c,resultado,resultado2 ;
double raiz = sqrt((b * b) - (4 * a * c));
void pedirDatos() {
	cin >> a;
	cin >> b;
	cin >> c;
}
void calculos() {
	raiz = sqrt((b * b) - (4 * a * c));
	double resultado = (-b + raiz) / (2 * a);
	double  resultado2 = (-b - raiz) / (2 * a);
}
void muestraResultados() {
	cout << resultado << endl;
	cout << resultado2 << endl;
}

int main()
{
	pedirDatos();
	calculos();
	muestraResultados();
	}
