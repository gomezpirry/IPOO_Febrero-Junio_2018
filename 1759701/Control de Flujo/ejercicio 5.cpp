//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int puntos = 0, opcion;
	
	do{
	
	cout<<"Ingrese los puntos del jugador: ";cin>>puntos;
	
	if((puntos >= 0)&&(puntos <= 4000)){
		cout<<"El jugador es de rango B";
	}else if ((puntos >=4001)&&(puntos <= 7000)){
		cout<<"El jugador es de rango C";
	}else if((puntos >= 7001)&&(puntos <= 9999)){
		cout<<"El jugador es de rango A";
	}else if(puntos == 10000){
		cout<<"el jugador es de rango SA";
	}else {
		cout<<"Error: Los puntos no pueden superar la cantidad de 10000";
	}
	cout<<"\Cierre el programa ingresando el 8 0 usa otro numero para continuar: ";cin>>opcion;
	system("cls");
	
}while (opcion != 8);
}
