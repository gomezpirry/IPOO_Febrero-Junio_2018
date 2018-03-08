//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------

#include <iostream>
using namespace std;

int main(){
	
	int notas= 5;
			// OK, pero no es conveniente usar variables para definir el tamaño del arreglo

	string Estudiante [notas]= {"E1","E2","E3","E4","E5",};
	float identificacion [notas] = {1765670,1765666,1765789,176598,176897};
	float quiz1[notas] = {4.8,4.3,4.7,4.1,4.6};
	float quiz2[notas] = {3.5,3.8,4.0,3.7,4.2};
	float notaParci[notas] = {3.9,3.5,3.4,3.3,3.9};
	float proyecto[notas] = {4.5,4.8,4.9,4.7,4.4};
	
	if 
	(notas>5){/// Nunca se va a cumplir esta condición
	 /// no hace nada
	(exit);
	
	}else{
		for (int n = 0; n < notas; n++){
		
		
		float finalquiz= ((quiz1[n] + quiz2[n])/2)*0.25;
		notaParci[n] *= 0.35;
		proyecto[n] *= 0.40;
		float nota_final= finalquiz + (notaParci[n]+proyecto[n]);
		
			cout<<"\n"<<Estudiante[n]<<".."<<identificacion[n]<<"\nNota del quiz"<<finalquiz<<"\n";
        	cout<<"nota del parcial"<<notaParci[n];
	        cout<<"nota del proyecto"<<proyecto[n];
         	cout<<"nota final"<<nota_final<<"\n";
	}

	}

	
	
	
	return 0;
}
