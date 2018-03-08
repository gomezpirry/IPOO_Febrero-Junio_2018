//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------

#include <iostream>
using namespace std;

int main () {
	int tam = 3; 

	// OK, pero no es conveniente usar variables para definir el tamaño del arreglo
	string nombre [tam] = {"Ayala","Manuel", "Martha"};
	int codigo [tam]= {1765503,1765667,1765517 };
	float quiz1 [tam]={5.0,5.0,3.0};
	float quiz2 [tam]={5.0,5.0,4.3};
	float examen [tam]={4.0,4.5,3.8};
	float proyecto_final [tam]={4.5,5.0,4.5};
	
	if (tam >3){ /// Nunca se va a cumplir esta condición
		(exit);
	}else{

		// OK
		for(int i = 0; i<tam; i++){
			float quiz = ((quiz1 [i] + quiz2 [i]) /2) * 0.25;
			examen[i]*=0.35;
			proyecto_final[i]*=0.40;
			float nota=quiz+ (examen [i] + proyecto_final [i]);
			
			cout<<"\n"<<nombre[i]<<"-"<<codigo[i]<<"\nLa nota de quiz es: "<<quiz<<"\n";
			cout<<"La nota del examen es: "<<examen[i]<<"\n";
			cout<<"La nota del proyecto_final es: "<<proyecto_final[i]<<"\n";
			cout<<"\nLa nota es: "<<nota<<"\n";

		
		
		}
	}
	
	return 0;
}

