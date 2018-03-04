//------------------------------------------
//------ Calificación 0.6
//
// * Evaluación incorrecta de una relación del condicional
//------------------------------------------

/*
 * primos.cpp
 *
 *  Created on: 25/02/2018
 *      Author: sefer
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/// OK
	cout<<"ingrese un numero para entre 0 y 100 para saber si es primo o no";
	int primo;
	cin>>primo;
	int contador=0;
	/// OK
	if(primo>=0 && primo<=100)
	{
	for(int i=1; i<=primo;i++)
	{
		if(primo%i==0 || primo%i==primo) /// La segunda condición nunca se cumple en ningun caso ( el residuo siempre es un numero menor al divisor)
		{
			contador++;
		}

	}

	//// OK
	if(contador==2)
	{
		cout<<"el numero es primo";
	}
	else
	{
		cout<<"el numero no es primo";
	}
	}
	else
	{
		cout<<"el numero ingresado no es valido";
	}
}



