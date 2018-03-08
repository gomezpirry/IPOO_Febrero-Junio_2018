
//------------------------------------------
//------ Calificación 0.9
//
// * No usa nombres que signifiquen algo en el programa (hola, ya, ta)
// * No valida que los arreglos tengan el mismo tamaño
// 
//------------------------------------------


/*
 * punto3.cpp
 *
 *  Created on: 4/03/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/// Use nombres que signfiquen algo para las variables
	int xd;
	int va;
	int ta;
	int ya;
	int ma;

	/// Usa nombres que signifiquen algo para declarar los arreglos
	cout<<"INGRESE EL TAMA�O DE LA LISTA DE ESTUDIANTES";
	cin>>xd;
	string hola[xd]; 
	cout<<"INGRESE LA CANTIDAD DE NOTAS DEL QUIZ 1";
		cin>>va; 
	float hola1[va];
	cout<<"INGRESE LA CANTIDAD DE NOTAS DEL QUIZ 2"; 
		cin>>ta;
	float hola2[ta]; 
	cout<<"INGRESE LA CANTIDAD DE NOTAS DEL PARCIAL";
		cin>>ya;
	float hola3[ya]; 
	cout<<"INGRESE LA CANTIDAD DE NOTAS DEL PROYECTO";
		cin>>ma;
	float hola4[ma]; 
	float hola5[xd]; 
	float hola6[xd]; 
	string t;
	float q1;
	float q2;
	float pa;
	float pr;


	//// No valida que los arrgelos tengan el mismo tamaño, Cuando se solicita la cantidad puede variar el tamaño de cada arreglo
	for(int i=0;i<xd;i++)
	{
		cout<<"INGRESE EL NOMBRE DEL ESTUDIANTE "<<i;
		cin>>t;
		hola[i]=t;

	}
	for(int o=0;o<xd;o++)
		{
			cout<<"INGRESE LA NOTA DEL PRIMER QUIZ DE"<<" "<<hola[o];
			cin>>q1;
			hola1[o]=q1;

		}
	for(int p=0;p<xd;p++)
		{
			cout<<"INGRESE LA NOTA DEL SEGUNDO QUIZ DE"<<" "<<hola[p];
			cin>>q2;
			hola2[p]=q2;

		}
	for(int y=0;y<xd;y++)
		{
			cout<<"INGRESE LA NOTA DEL PARCIAL DE"<<" "<<hola[y];
			cin>>pa;
			hola3[y]=pa;

		}

	for(int i=0;i<xd;i++)
		{
			cout<<"INGRESE LA NOTA DEL PROYECTO DE "<<" "<<hola[i];
			cin>>pr;
			hola4[i]=pr;


		}

       cout<<"\n";


       for (int b=0;b<xd;b++)
       {
    	   float ios = hola1[b] + hola2[b];
    	   float div= ios/2;
    	   hola5[b]=div;
    	   ios=0;
       }

		/// La asignación se puede hacer directamente sin usar variables temporales para guardar información
	 	///	hola6[n] =   hola5[n] * 0.25 +  hola3[n] * 0.35 + hola4[n] * 0.40;
       for(int n=0; n<xd;n++)
       {
    	  float de= hola5[n] * 0.25;
    	  float da= hola3[n] * 0.35;
    	  float du= hola4[n] * 0.40;
    	  float sumart= de+da+du;
    	  hola6[n]=sumart;
    	  de=0;
    	  da=0;
		  du=0;
		  sumart=0;

       }




	for(int t=0;t<xd;t++)
	{
		cout<<hola[t]<<"\t QUIZ1:"<<hola1[t]<<"\t QUIZ2:"<<hola2[t]<<"\t PARCIAL:"<<hola3[t]<<"\t PROYECTO:"<<hola4[t]<<"\t NOTA FINAL:"<<hola6[t]<<"\n";
	}


}



