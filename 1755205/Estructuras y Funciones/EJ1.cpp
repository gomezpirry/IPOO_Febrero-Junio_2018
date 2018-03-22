//------------------------------------------
//------ Calificación 0.0
// 
//-----------------------------------------

/*
 * EJ1.cpp
 *
 *  Created on: 9/03/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>

using namespace std;

/// No usa sobre carga de funciones
/// No evalua enteros directamente
 void asignar(float sebas[], int tamano, float datos, float variable, bool opcion, float variable2)
{
	cout<<"POR FAVOR INGRESE LOS DATOS A ALMACENAR\n";

	for(int i=0;i<tamano;i++)
	{
		cin>>datos;
        sebas[i]=datos;


	}
	cout<<"DIGITE EL NUMERO 1 PARA SACAR EL NUMERO MAYOR O EL 0 PARA EL MENOR\n";
	cin>>opcion;
    if (opcion==true)
    {
	for(int j=0; j<tamano;j++)
	{
		if(sebas[j]>variable)
		{
			variable=sebas[j];
		}
	}
	cout<<"EL NUMERO MAYOR ES:"<<" "<<variable;
    }
    else
    	if(opcion == false)
    	{
    		for (int y=0;y<tamano;y++)
    		{
    			if(sebas[y]<variable2)
    			{
    				variable2=sebas[y];
    			}
    		}
    	cout<<"EL NUMERO MENOR ES:"<<" "<<variable2;
    	}



}

int main()
{
bool opcion= false;
float datos;
int tamano;
float variable2=10000000;
float variable=0;
cout<<"INGRESE EL TAMAÑO DEL ARRAY\n";
cin>>tamano;
float sebas[tamano];
asignar(sebas,tamano, datos, variable, opcion, variable2);

}
