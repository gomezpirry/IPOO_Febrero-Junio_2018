//------------------------------------------
//------ Calificación 0.55 
//
// * No uso else if
//------------------------------------------

/*
 * rangosdejugadores.cpp
 *
 *  Created on: 25/02/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout<<"digite su puntaje para saber en cual categoria se encuentra\n";
	int valor;
	cin>>valor;


	///// hay que usar else if(){ } en lugar de else { if(){ }}
	if(valor>=0 && valor<=4000)
	{
		cout<<"estimado usuario, usted pertenece al rango C";
	}
	else
	{
		if(valor>=4001 && valor<=7000)
			{
				cout<<"estimado usuario, usted pertenece al rango B";
			}
		else
			{
				if(valor>=7001 && valor<=9000)
					{
						cout<<"estimado usuario, usted pertenece al rango A";
					}
				else
					{
						if(valor>=9001 && valor<=9999)
							{
								cout<<"estimado usuario, usted pertenece al rango S";
							}
						else
							{
								if(valor==10000 )
									{
										cout<<"estimado usuario, usted pertenece al rango SA";
									}
								else
								{
									cout<<"ERROR, EL DATO INGRESADO ES INVALIDO";

								}
							}
					}
			}
	}
}






