//-------------------------------------------------
//   Calificación: 0.0
//
//--------------------------------------------------

#include <iostream>
#include <conio.h>

/// Falta definir el valor de left ya que puso el igual
using namespace std;
enum direccion{
	up = 72,
	down = 80,
	left = 
	 
	
	
	
};
void transformar(int teclas[5], string * clave){
	
	for(int i = 0; i < 5 ; i++){
	// falta el caso de right
	switch(teclas[i]){
		case 72:
			clave[i] = "up";
			break;
			case down:
			clave[i] = "down";
			break;	
			
			clave[i] = "left";
			break;
	
		
	}
}
}


int main(){
	 
	 int caracteres[5] = {};
	 int contador = 0;
	
	
	cout << "ingrese clave: "
	while(contador < 5 ){
		
		
		int caracter = getch();
		if(caracter == 0 || caracter == 224)
		continue;
		caracteres[contador] = caracter;
		contador++;
		
	}
	
	
	

	int car;
	car = getch();
	
	cout << car;
	
}

 






