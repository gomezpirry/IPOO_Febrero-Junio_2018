//------------------------------------------
//------ Calificación 0.55 
//
// * No uso else if
//------------------------------------------

/*
 * ejercicio7.cpp
 *
 *  Created on: 25/02/2018
 *      Author: MARINO RODRIGUEZ
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	float pagodia;
	float antiguedad;
	float diastrabajados;

	cout<<"ingrese el numero de dias trabajados\n";
				cin>>diastrabajados;
	cout<<"ingrese el valor del pago por dia\n";
			cin>>pagodia;
	cout<<"ingrese el numero de a�os trabajados\n";
	        cin>>antiguedad;
	 float salario= pagodia * diastrabajados;
	 float salariototal = salario;

///// hay que usar else if(){ } en lugar de else { if(){ }}
	        if(antiguedad>=10)
	        {
	        	salario *=0.10;
	        	salariototal += salario;
	        }
	        else
	        {
	        	if(antiguedad>=5 && antiguedad<10)
	        	{
	        		 salario *= 0.07;
	        		 salariototal+=salario;
	        	}
	        	else
	        	{
	        		if(antiguedad>=3 && antiguedad<5)
	        		{
	        			 salario *= 0.05;
	        			 salariototal+=salario;
	        		}
	        		else
	        		{
	        			if(antiguedad<3)
	        			{
	        				salario *= 0.03;
	        				salariototal+=salario;


	        			}
	        		}
	        	}
	        }

	        float salariodefinitivo=salariototal;
	        if(diastrabajados>=10 && diastrabajados<20)
	        {
	        	       salariototal	*= 0.05;
	        	       salariodefinitivo+=salariototal;
	        }else
	        {
               if(diastrabajados>=20 && diastrabajados<30)
               {
            	   salariototal	*= 0.05;
            	   salariodefinitivo+=salariototal;
               }

	        }

	        cout<<"su salario equivale a:$"<<salariodefinitivo<<".";
}



