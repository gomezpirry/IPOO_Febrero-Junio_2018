//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int p = 0;
	
	cout<<"Ingrese los puntos al jugador: ";cin>>p;
	
	/// OK
	if((p >= 0)&&(p <= 4000)){
	cout<<"El jugador es de rango C";
	}else if ((p >=4001)&&(p <= 7000)){
		cout<<"El jugador es rango B";
	}else if((p >= 7001)&&(p <= 9999)){
		cout<<"El jugador es rango A";
	}else if(p == 10000){
		cout<<"el jugador es rango SA";
	}else {
		cout<<"Error: Los puntos no pueden superar la cantidad de 10000";
 }
 
}
