//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){


	/// OK
	
	int puntaje=0;
	
	cout<<"ingresa puntaje del jugador.";
	cin>>puntaje;
	
	if ((puntaje>=0)&&(puntaje<=4000)){
		cout<<"el jugador esta en el RANGO C.";
			
	}else if ((puntaje>=4001)&&(puntaje<=7000)){
		cout<<"el jugador esta en el RANGO B";
	}else if ((puntaje>=7001)&&(puntaje<=9000)){
		cout<<"el jugador esta en el RANGO A";
		
	}else if((puntaje>=9001)&&(puntaje<=9999)){
		cout<<"el jugador esta en el RANGO S";
		
	}else if(puntaje==10000){
		cout<<"el jugador esta en el RANGO SA";
		
	}else{
		cout<<"el jugador no tiene RANGO"<<puntaje<<endl;
	}
	

}


