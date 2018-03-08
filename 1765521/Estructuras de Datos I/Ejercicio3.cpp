//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------

#include <iostream>
using namespace std;

int main () {
	int tam = 4;

		// OK, pero no es conveniente usar variables para definir el tamaño del arreglo
	string nombre [tam] = {"Jos�","Martha","Daniel","David"};
	int codigo [tam]= {1765521,1765517,1468710, 1688821};
	float quiz1 [tam]={5.0,3.0,4.0,3.0};
	float quiz2 [tam]={5.0,4.3,3.0,5.0};
	float examen [tam]={4.0,3.8,1.0,3.5};
	float proyecto_final [tam]={4.5,4.5,1.5,4.0};
	
	if (tam >4){ /// Nunca se va a cumplir esta condición
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

