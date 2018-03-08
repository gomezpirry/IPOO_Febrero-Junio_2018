//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------

#include <iostream>
#include  <typeinfo>
using namespace std;


int main(){
	
	int arreglo[10]={10,3,4,4,1,5,8,7,4,1};
	int buscar=10, repetido = 0;

	/// No valida que los tipos sean iguales
	for(int i=0;i<10; i++)
	{
		
		if(arreglo[i]=buscar){
			exit;} /// esta instruccion no hace nada
			
			else{
				typeid(buscar).name(); /// Esta instrucción no hace nada
				repetido++;
			}
		}
		
		cout<<"El Numero A Buscar Es ?:----->" <<buscar<< "---->Esta Repetido------>" <<repetido<<"---->Veces---->";
		
		return 0;
	}
	//Porfe me toco asi porque no me quieren suncionar los saltos de linea.
	
	
	
	
	
	
	

