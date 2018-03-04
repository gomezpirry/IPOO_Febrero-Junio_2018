//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>


using namespace std;

int main(){
	

	int num;
	cout<<"Digite Un Numero Deacuerdo Al Mes";cin>>num;
	
	/// OK 
	switch (num){
		case 1: cout<< "El numero corresponde a: Enero";break;
		case 2: cout<< "El numero corresponde a: Febrero";break;
		case 3: cout<< "El numero corresponde a: Marzo";break;
		case 4: cout<< "El numero corresponde a: Abril";break;
		case 5: cout<< "El numero corresponde a: Mayo";break;
		case 6: cout<< "El numero corresponde a: Junio";break;
		case 7: cout<< "El numero corresponde a: Julio";break;
		case 8: cout<< "El numero corresponde a: Agosto";break;
		case 9: cout<< "El numero corresponde a: Septiembre";break;
		case 10:cout<< "El numero corresponde a: Octubre";break;
		case 11:cout<< "El numero corresponde a: Noviembre";break;
		case 12:cout<< "El numero corresponde a: Dicciembre";break; // Diciembre
		
		default:cout<<"El Numero No Pertenece A Ningun Mes, Recuerde Solo Son 12 Meses ";break;
	}
		

}
