//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------


#include <iostream>

using namespace std;

int main (){

	int arreglo [10] = {1, 4, 3, 4, 4, 1, 4, 8, 4, 10};
	int buscar = 4, repetido = 0;

/// No valida que tengan el mismo tipo  de dato
	for(int i = 0; i < 10; i++){

	if (arreglo[i] == buscar){
		repetido++;
	}
}
cout<<"El numero a buscar es : "<<buscar<<" y esta repetido "<<repetido<<" veces";
}

