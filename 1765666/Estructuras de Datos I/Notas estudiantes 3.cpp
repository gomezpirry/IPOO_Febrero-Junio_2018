//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	int tama = 5;
	// OK, pero no es conveniente usar variables para definir el tamaño del arreglo

	string estudiante [tama] = {"Daniel Roman", "Daniel Rodriguez", "Yuliana Serna", "Yileidy Ospina", "Valentina Arboleda"};
	int codigo  [tama] = {1765667, 1765684, 1765521, 1765670, 1765503  };
	float quiz1 [tama]= {4.5, 4.4, 4.6, 3.8, 4.0};
	float quiz2 [tama] = {4.8, 4.6, 4.0, 4.8, 4.5};
	float parcial [tama] = {4.4, 4.0, 4.2, 4.0, 4.1};
	float proyecto [tama] = {4.5, 4.5, 4.5, 4.5, 4.5};
	
	if (tama > 5){ /// Nunca se va a cumplir esta condición 
		(exit); // esta sentencia no hace nada
	}else{
		for(int i = 0; i < tama; i++){
			
			float quizes = ((quiz1[i] + quiz2[i]) / 2) * 0.25;
			parcial[i] *= 0.35; 
			proyecto[i] *= 0.40;
			float nota_final = quizes + (parcial[i] + proyecto[i]);
			
			cout<<"\n"<<estudiante[i]<<"-"<<codigo[i]<<"\nLa nota de quizes es: "<<quizes<<"\n";
			cout<<"La nota del parcial es: "<<parcial[i]<<"\n";
			cout<<"La nota del proyecto es: "<<proyecto[i]<<"\n";
			cout<<"\nLa nota final es: "<<nota_final<<"\n";
		}
	}
	
return 0;
}
