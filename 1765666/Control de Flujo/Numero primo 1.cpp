//------------------------------------------
//------ Calificación 0.68
//
//------------------------------------------

#include <iostream>

using namespace std;

/*
Realice un programa que reciba un valor entero entre 0 y 100 por consola e imprima si
ese valor es un numero primo o no (Pista: Utilice el residuo para calcular los m�ultiplos).
*/

int main(){
	
	int numero, inicio = 0, suma;
	
	cout <<"digite un numero: ";
	cin >> numero;
	
		for(suma = 1;suma<(numero+1);suma++)
		if(numero % suma==0){
			inicio++; /// El nombre no indica lo que hay en la variable
		}
		if(inicio!=2)
		{cout<<"\nNo es un numero primo! ";}
				
		else {cout<<"\nEs un numero primo"<<endl;}

	return 0;
}
