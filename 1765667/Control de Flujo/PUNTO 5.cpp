//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int puntos = 0;
	char opcion; // Esta variable no se usa 
	
	cout<<"Ingrese los puntos al jugador: ";cin>>puntos;
	
	if((puntos >= 0)&&(puntos <= 4000)){
	cout<<"El jugador es de rango C";
	}else if ((puntos >=4001)&&(puntos <= 7000)){
		cout<<"El jugador es rango B";
	}else if((puntos >= 7001)&&(puntos <= 9999)){
		cout<<"El jugador es rango A";
	}else if(puntos == 10000){
		cout<<"el jugador es rango SA";
	}else {
		cout<<"Error: Los puntos no pueden superar la cantidad de 10000";
 }
 
}
