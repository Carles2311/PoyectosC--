#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 3;
	double b = 5;
	double c = 1;
	double resultado;
	double resultado2;
	resultado = -b - sqrt((b * b) - (4 * a * c)) / 2 * a;
	resultado2 = -b + sqrt((b * b) - (4 * a * c)) / 2 * a;
	cout << resultado << endl;
	cout << resultado2 << endl;
}