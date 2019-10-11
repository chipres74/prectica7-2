// ordenamiento3numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
		int n1;
		int n2;
		int n3;
		cout << "INGRESE EL PRIMER NUMNERO" << endl;
		cin >> n1;
		cout << "INGRESE EL SEGUNDO NUMNERO" << endl;
		cin >> n2;
		cout << "INGRESE EL TERCER NUMNERO" << endl;
		cin >> n3;
		if (n1 < n2) {
			if (n2 < n3) {
				cout << "LOS NUMEROS ORDENADOS ES=" << n3 << "," << n2 << "," << n1 << endl;
			}
			else {
				if (n1 < n3) {
					cout << "LOS NUMEROS ORDENADOS ES=" << n2 << "," << n3 << "," << n1 << endl;
				}
				else {
					cout << "LOS NUMEROS ORDENADOS ES=" << n2 << "," << n1 << "," << n3 << endl;
				}
			}
		}
		else
		{
			if (n1 < n3) {
				cout << "LOS NUMEROS ORDENADOS ES=" << n3 << "," << n1 << "," << n2 << endl;
			}
			else {
				if (n2 < n3) {
					cout << "LOS NUMEROS ORDENADOS ES=" << n1 << "," << n3 << "," << n2 << endl;
				}
				else {
					cout << "LOS NUMEROS ORDENADOS ES=" << n1 << "," << n2 << "," << n3 << endl;
				}
			}
		}
		return 0;
	}


 