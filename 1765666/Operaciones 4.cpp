//------------------------------------------
//------ Calificación 0.35
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){


	char operaciones;
	float suma = 0, resta =0, multiplicacion=0, division=0, porcentaje =0,n1,n2;
	
	cout<<"Escoja la opcion (con su inicial): "<<endl;
	cout<<"Suma"<<endl;
	cout<<"Resta"<<endl;
	cout<<"Multiplicacion"<<endl;
	cout<<"Division"<<endl;
	cout<<"Porcentaje"<<endl;
	cout<<"Su Opcion es: ";
	cin>>operaciones;
	
	// Te falto implementar que cada vez que se realice una operación vuelva a desplegar el menu
	/// Es confuso hacer uin cin  para ambas variables y el ingrese su operación es confiuso tambien
	switch(operaciones){
		case 's': cout<<"Ingrese su operacion: ";
		cin>>n1>>n2;
		suma = n1+n2;
		cout<<"la respuesta es: "<<suma;break;
		case 'r': cout<<"Ingrese su operacion: ";
		cin>>n1>>n2;
		resta = n1-n2;
		cout<<"la respuesta es: "<<resta;break;
		case 'm': cout<<"Ingrese su operacion: ";
		cin>>n1>>n2; 
		multiplicacion = n1*n2;
		cout<<"la respuesta es: "<<multiplicacion;break;
		case 'd': cout<<"Ingrese su operacion: ";
		cin>>n1>>n2;
		division = n1/n2;
		cout<<"la respuesta es: "<<division;break;
		case 'p': cout<<"Ingrese su operacion: ";
		cin>>n1>>n2;
		porcentaje = (n1+n2)/2;		/// El porcentaje esta mal calculado
		cout<<"la respuesta es: "<<porcentaje;break;
		default: cout<<"La opcion es invalida ";break;
	}
	
	
	
	
	return 0;
}
