//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------

#include <iostream>
using namespace std;
#include <typeinfo>

int main () {

int arreglo [11] = {1, 2, 3, 4, 5, 6, 7, 8, 7, 8,7};
	int buscar = 7, repetido = 0;
	
	for(int a = 0; a < 11; a++){
	
	/// No valida que los tipos sean iguales
	if (arreglo[a] != buscar){
		exit; /// esta instruccion no hace nada
	}else{
		typeid(buscar).name (); /// Esta instrucción no hace nada
		repetido++;
	}
}
cout<<"El numero a encontrar es : "<<buscar<<" y esta repetido "<<repetido<<" veces";
}
