//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	int numero;
	cout<<"Ingrese un numero entero del mes: ";cin>>numero;
	
	/// OK
	switch (numero){
		case 1: cout<<"Este numero corresponde a: Enero";break;
		case 2: cout<<"Este numero corresponde a: Febrero";break;
		case 3: cout<<"Este numero corresponde a: Marzo";break;
		case 4: cout<<"Este numero corresponde a: Abril";break;
		case 5: cout<<"Este numero corresponde a: Mayo";break;
		case 6: cout<<"Este numero corresponde a: Junio";break;
		case 7: cout<<"Este numero corresponde a: Julio";break;
		case 8: cout<<"Este numero corresponde a: Agosto";break;
		case 9: cout<<"Este numero corresponde a: Septiembre";break;
		case 10: cout<<"Este numero corresponde a: Octubre";break;
		case 11: cout<<"Este numero corresponde a: Noviembre";break;
		case 12: cout<<"Este numero corresponde a: Diciembre";break;
		default: cout<<"El numero que usted ingreso no corresponde a ningun mes";break;
	}
		
}
