//------------------------------------------
//------ Calificación 0.71
//
// * Revisar Ortografia
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int puntaje = 0, Exit=0;
	
	do{
	
	// OK
	cout<<"___________________DIJITE EL PUNTAJE DEL JUGADOR: ";cin>>puntaje;
	
	if((puntaje >= 0)&&(puntaje <= 4000)){
		cout<<"\n----EL RANGO DEL JUGADOR ES____ (C)";
	
	}else if ((puntaje >=4001)&&(puntaje <= 7000)){
		cout<<"\n----EL RANGO DEL JUGARO ES ___(B)"; 
	

	}else if ((puntaje >= 7001)&&(puntaje <= 9000)){
		cout<<"\n-----EL RANGO DEL JUGADOR ES____(A)";
	

	}else if ((puntaje >= 9001)&&(puntaje <= 9999)){
		cout<<"\n------EL RANGO DEL JUGADOR ES ______(S)";	
	

	}else if ((puntaje == 10000)){
		cout<<"\n----EL RANGO DEL JUGADOR ES ______(SA)";
	

	}else {
		cout<<"_____LA CANTIDAD DE PUNTOS NO PUEDE SUPERAR LOS (10000) PORFAVOR INGRESA UN NUMERO MENOR ()-__-()-";
	}
	cout<<"\n______SI QUIERES CONTINUAR PRECIONA UN NUMERO SEGUIDO DE (ENTER), SI QUIERES SALIR PRECIONA (0) O CUALQUIER LETRA: ";cin>>Exit; /// Presiona
	system("cls");
	
}while (Exit !=0); 
}
