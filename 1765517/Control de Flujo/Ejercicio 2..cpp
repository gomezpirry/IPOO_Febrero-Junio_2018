//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*Realice un programa que reciba un valor entero por consola e imprima si ese valor es
par o impar*/

#include <iostream>

using namespace std;

int main (){
	
	int numero;
	
	// OK
	cout << "Digite Un Numero: ";
	cin>> numero;
	if((numero % 2)==0)
	
	cout<<" Este Es Un Numero Par: ";
	
	else cout <<" Este Es Un Numero Impar: ";

		return 0;
}
