//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------

#include <iostream>

using namespace std;

int main (){

	int arreglo [10] = {9, 12, 12, 112, 12, 56, 12, 75, 98, 10};
	int buscar = 12, repetido = 0;


/// No valida que tengan el mismo tipo  de dato
	for(int i = 0; i < 10; i++){

	if (arreglo[i] == buscar){
		repetido++;
	}
}
cout<<"El numero a buscar es : "<<buscar<<" y esta repetido "<<repetido<<" veces";
}

