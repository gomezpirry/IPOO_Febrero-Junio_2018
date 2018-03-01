//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*5. Realice un programa que calcule el rango de un jugador basado en su puntaje. El juego
acepta puntajes entre 0 y 10000 puntos y maneja los siguientes rangos:
C: 0 - 4000
B: 4001 - 7000
A: 7001 - 9000
S: 9001 - 9999
SA: 10000
El programa recibe por consola el puntaje, valida si el valor esta entre los valores
permitidos (sino muestra un mensaje de error) y muestra el rango del jugador.*/


#include<iostream>

using namespace std;

int main(){
	int num;
	// OK
	cout<<"INGRESE EL PUNTAJE:"<<endl;
	cin>>num;
	
	if(num>0 && num<4000){
		cout<<"C"<<endl;
		}
	else if(num>=4001 && num<=7000){
		cout<<"B"<<endl;
		}
	else if(num>=7001 && num<=9000){
		cout<<"A"<<endl;
		}
	else if(num>=9001 && num<=9999){
		cout<<"S"<<endl;
		}
	else if(num==10000){
		cout<<"SA"<<endl;
		}
	else{
		cout<<"no esta en el rango"<<endl;
		}
	
	
	}
