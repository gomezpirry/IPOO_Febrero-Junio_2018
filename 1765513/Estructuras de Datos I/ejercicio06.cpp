//-------------------------------------------------
//   Calificación: 0.6
//
//--------------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main (){

	int capacidad=3,capacidad2=4;
/// OK pero no es conveniente definir el tamaño del arreglo con una variable
	int A [capacidad][capacidad2] ={{5,3,-9,7},
			                        {-2,7,6,10},
			                        {3,9,5,2}};

	int B [capacidad] [capacidad2] ={{8,4,6,1},
			                         {1,9,-2,6},
			                         {3, 10,8,3}};

	if((capacidad>3) && (capacidad2>4)){ /// Esta condicion no evalua que ambos tamaños sean iguales
	   exit(EXIT_FAILURE);}
	else{

		/// SOlo calcula la suma de  las matrices 
      for(int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			cout<<A[i][j]+B[i][j];
		}
	}
}

	return 0;

	}



