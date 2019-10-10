// ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ns;
	int i;
	int t;
	int men;
	i = 1;
	men = 0;
	cout << "Cuantos numeros ingresara: ";
	cin >> ns;
	while ((i <= ns)) {
		cout << "Ingrese el numero: " << i << endl;
		cin >> t;
		if ((i == 1)) {
			men = t;
		}
		else {
			if ((t < men)) {
				men = t;
			}
		}
		i = i + 1;
	}
	cout << "El menor de los numeros ingresados es: " << men << endl;
	return 0;
}
