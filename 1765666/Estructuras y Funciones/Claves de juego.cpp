//-------------------------------------------------
//   Calificación: 0.5
//
//--------------------------------------------------

#include<iostream>
#include<conio.h>
#include<cctype>

using namespace std;

enum direccion{
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77
};



void transformar(int teclas[5], string* clave){
	
	for(int i=0;i < 5;i++){
	
	switch(teclas[i]){
		case 72:
			clave[i] = "UP";
			break;
		case DOWN:
			clave[i] = "DOWN";
			break;
		case LEFT:
			clave[i] = "LEFT";
			break;
		case RIGHT:
			clave[i] = "RIGHT";
			break;
			default:
				char car = teclas[i];
				string letraString(1, toupper(car));
				clave[i] = letraString; // falta el break
	}
}

// Faltan la funcion que verifique si coinciden

string clave = "Clave no existe " ;
for (int i = 0 ; i < 6 ; i++){
bool coinciden = true ;}
for ( int j = 0 ; j < 5 ; j++){
bool eval = 
if ( eval )f
coinciden = false ;
break ;

if (coinciden ){

clave = 

break ;


return clave;


if(coinciden){
	clave = teclas[i][0];
	break;
}



int main(){

int caracteres[5] = {};
int contador = 0

cout"Ingrese clave :";
while(contador < 5){
	
	int caracter = getch();
	if(caracter == 0 || caracter == 224)
	continue;
	caracteres[contador] = caracter;
	contador++;
}

string claves[5] = {};
transformar(caracteres, claves);

for(int i = 0; i <5; i++){
	cout<<caracteres[i]<< " - "
}
}
}
