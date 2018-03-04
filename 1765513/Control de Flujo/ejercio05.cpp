//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main (){

	 int rango;

	cout <<"Colocar el Rango:";cin>>rango;


	/// OK
	if ((rango >= 0) && (rango  <= 4000)){
			cout  << "c\n";
	}
	else if((rango >= 4001) && (rango <= 7000)){
			cout  << "B\n";
	}
	else if((rango >= 7001) && (rango <= 9000)){

		cout<<"A\n";
	}
	else if((rango >= 9001) &&(rango <= 9999)){
		cout<< "S\n";
	}
	else if (rango == 10000){
       cout <<"SA\n";
	}
	else{
		cout <<"Error en el numero de rango es: "<< rango; /// Revisa los mensajes que muestra en pantallas
	}
}
