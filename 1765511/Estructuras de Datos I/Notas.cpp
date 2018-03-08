//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------

#include <iostream>
using namespace std;

int main() {

	// OK, pero no es conveniente usar variables para definir el tamaño del arreglo
	int tam=5;
		string nombre [tam]={"Alberto","David","wiliam","Pedro","Alonso"};
		int codigo[tam]= {1765511, 1523641, 1765517, 1765506, 1723467};
		float quiz1 [tam]={2.3, 3.4, 4.3, 5,0, 4.3};
		float quiz2 [tam]={1.3, 4.4, 4.1, 5,0, 3.2};
		float parcial [tam]= {2.3,3.2,4.3,2.1,3.4};
		float proyecto [tam]={4.3,3.1,4.5,4.0,4.5};
		
	if (tam >5){ /// Nunca se va a cumplir esta condición
	(exit);
}else {

	// OK
	for(int i=0;i<tam; i++){
		float quiz= ((quiz1 [i]+ quiz2 [i])/2) *0.25;
		parcial [i]*=0.35;
		proyecto[i]*=0.40;
		float nota= quiz+(parcial [i]+ proyecto [i] );
		
		
		cout<<"\n"<<nombre[i]<<"-"<<codigo[i]<<"\n Nota Del Cuis n\"<<quiz<<""\n";
		cout<<"Nota Del Parcial:"<<parcial[i]<<"\n";
		cout <<"Nota Del Proycto:"<<proyecto [i]<<"\n";
		cout<<"\nNota Final:"<<nota<<"\n";
		
		
	}
	
	
}

return 0;

	
}
