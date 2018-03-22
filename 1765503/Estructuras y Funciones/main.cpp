//-------------------------------------------------
//   Calificación: 0.0
//
//--------------------------------------------------

#include <iostream>
#include <conio.h>
#include <cctype>

using namespace std;

enum direccion {
	UP= 72,
	DOWN = 80,
	LEFT = 81,
	RIGHT = 77
};


void transformar(int teclas[5], string* clave){

 for (int i = 0; i < 5; i++){

 	switch (teclas[i]){
 		    case 72:
 			    string[i] = "up";
 		    	break;

 			case DOWN:
 				string[i] = "down";
 				break;

 			case LEFT:
 				string[i] = "left";
 				break;

 			case RIGHT:
 				string[i] = "right";
 				break;

			default:
			char  car = teclas[i];
			string letraString(1, toupper(car));
			clave[1] = letraString; /// Siempre reeescribe la posicion 1 de clave 
	 }
 }

}

int main (){

	int caractere[5] = {};
	int contador = 0;

	cout <<" Ingrese clave: ";

	while(contador < 5) {

		int caracter = getch();
		if (caracter == 0 || caracter == 224)
		continue;

		caracteres[contador] = caracter;
		contador++;
	}

string /// Genera error
for (int i = 0; i 5; i++){
	cout << caracteres[i] << "\n";
    }

}



