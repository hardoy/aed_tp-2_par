//~ TP #02: Distingue números pares de impares.
//~ Antonio Agustín Hardoy
//~ 17 abril 2015, 7:45

#include <iostream>

using namespace std;

int main () {
int a;
	
	cout << "Ingrese un número entero: ";
	cin >> a;
	cout << endl << endl;
	if (a%2 == 0){
		cout << "El número ingresado es par.";
	} else {
		cout << "El número ingresado es impar.";
	}
  cout << endl << endl;
    
return 0;
}
