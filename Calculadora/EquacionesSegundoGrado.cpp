#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 1;
	double b = 2;
	double c = 3;
	double resultado;
	double resultado2;
	resultado = -b - sqrt((b*b)-(4*a*c))/2*a;
	resultado2 = -b + sqrt((b * b) - (4 * a * c)) / 2 * a;
	cout << resultado << endl;
	cout << resultado2 << endl;

}