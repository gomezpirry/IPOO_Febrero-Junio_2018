//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*
 * ejercicio1.cpp
 *
 *  Created on: 23/02/2018
 *      Author: MARINO RODRIGUEZ
 */
#include <iostream>
#include <string>

using namespace std;

int main(){

	/// OK 
	int cont=0;
	int numero;
	cout <<"ingrese un numero";
	cin >> numero;

	// OK
	for(int i=1; i<=numero; i++)
	{

		if(numero % i==0){
			cont++;
			}

	}

	/// OK
	if(cont==2){
		cout<<"este numero es primo";
	}
	else
	{
		cout<<"este numero no es primo";
	}



}


