//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	int puntaje;
	
	// OK
	cout<<"Introduzca su puntaje (0 a 10000): "<<endl;
	cin>>puntaje;
	
	
	if(puntaje <= 4000){
		cout<<"Su calificacion es: C";
	}
	else if(puntaje <= 7000){
		cout<<"Su puntaje es: B";}
		else if(puntaje <= 9000){
			cout<<"Su puntaje es: A";}
			else if(puntaje <= 9999){
			     cout<<"Su puntaje es: S";}
			     else if(puntaje <= 10000){
			          cout<<"Su puntaje es: A";}
			          else{
			          	cout<<"No es un numero valido.";}
					  
		        	return 0;
}
