//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------


#include<iostream>
#include<string>

using namespace std;


int main (){

	int capacidad = 4;
	// OK, pero no es conveniente usar variables para definir el tamaño del arreglo
	string nombre [capacidad] = {"Daniel","manuel","jose","Maria",};
	int codigo [capacidad] = {1765513,1765544,1764422,1745672};
	float quiz1 [capacidad] = {3.2,2.3,5.0,4.5};
	float quiz2 [capacidad] = {4.5,4.8,3.5,2.0};
	float parcial [capacidad]= {5.0,4.5,4.0,3.5};
	float proyecto [capacidad] = {1.0,1.5,2.0,4.5};

	if (capacidad > 4){ /// Nunca se va a cumplir esta condición
		exit (EXIT_FAILURE);
	}else{

		// OK
			for (int i = 0;i < capacidad; i++){
				float quizes = ((quiz1[i]+quiz2[i])/2)* 0.25;
				parcial[i] *= 0.35;
				proyecto [i]*= 0.40;
				float nota_final = quizes + parcial[i]+proyecto[i];

				cout.precision(2);
				cout <<"\n"<< nombre[i]<<"  codigo:"<<codigo[i];
				cout <<"\n quiz total:"<<quizes;
				cout<<"\n parcial:"<<parcial[i];
				cout <<"\nproyecto:"<<proyecto[i]<<"\n";
				cout <<" nota final:"<<nota_final<<"\n";
			}
		}
	return 0;
	}

