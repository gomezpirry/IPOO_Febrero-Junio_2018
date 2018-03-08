//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------

#include <iostream>
#include<typeinfo>


using namespace std;

int main (){
	
	int arreglo [10] = {1, 4, 3, 4, 5, 1, 7, 8, 4, 10};
	int buscar = 4, repetido = 0;
	
	for(int i = 0; i < 10; i++){
		/// No valida que los tipos sean iguales
		if (buscar != arreglo[i]){
			exit; /// esta instruccion no hace nada
		}else{
			typeid(buscar).name();
			repetido++; /// Esta instrucción no hace nada
			system("cls");
			cout<<"El numero a buscar es : "<<buscar<<" y esta repetido "<<repetido<<" veces"; /// Va a mostrar 11 veces estos valores
		}
	
}


}
	
	
	
	
	

