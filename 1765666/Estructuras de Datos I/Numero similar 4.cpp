//-------------------------------------------------
//   Calificación: 0.0
//
//  * Programa con errores
//--------------------------------------------------


#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
	int numeros[]= {2 , 3, 4, 5, 6, 45, 10, 3};
	int buscar[]={3,4,45,66,32}; // Solo habia que buscar un dato
	int similar = 0;
	cout<< numeros;
	
	for(int i=0;i!=8;i++){
		
		if(buscar[i] == numeros[i]){ /// Cuando i = 5 genera erro de acceso a numeros[i]
		cin>>similar;}
		else exit; /// No hace nada
		typeid(similar).name();
		cout<<similar;
		
	
	}
	
	
	
	
	return 0;
}
