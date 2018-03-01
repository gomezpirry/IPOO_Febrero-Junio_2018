//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*
 * ejercicio5.cpp
 *
 *  Created on: 25/02/2018
 *      Author: MARINO RODRIGUEZ
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int valor;
	cout<<"ingrese el puntaje del jugador";
	cin>>valor;

	/// OK
	if(valor>=0 && valor<=4000)
		cout<<"C";
	else
		if(valor>=4001 && valor<=7000)
			cout<<"B";
		else
			if(valor>=7001 && valor<=9000)
					cout<<"A";
				else
					if(valor>=9001 && valor<=9999)
						cout<<"S";
					else
						if(valor==10000)
							cout<<"SA";
						else
							if(valor>10000)
								cout<<"numero invalido";
}




