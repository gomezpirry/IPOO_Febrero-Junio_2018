//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

//Realice un programa que reciba un entero entre 1 y 12 e imprima a que mes corresponde.
//El programa debe validar si el entero que se ingresa esta en el rango solicitado, sino
//debe mostrar un mensaje.

#include <iostream>

using namespace std;

int main(){

	
	
int mes;
	cout<<"ingresa numero del mes."<< endl;
	 cin>>mes;
	
	
	// OK
	switch(mes){
		case 1: cout<<"Enero.\n"<< endl;break;
		case 2: cout<<"Febrero.\n"<< endl;break;
		case 3: cout<<"Marzo.\n"<< endl;break;
		case 4: cout<<"Abril.\n"<< endl;break;
		case 5: cout<<"Mayo.\n"<< endl;break;
		case 6: cout<<"Junio.\n"<< endl;break;
		case 7: cout<<"Julio.\n"<< endl;break;
		case 8: cout<<"Agosto.\n"<< endl;break;
		case 9: cout<<"Septiembre.\n"<< endl;break;
		case 10: cout<<"Octubre.\n"<< endl;break;
		case 11: cout<<"Noviembre.\n"<< endl;break;
		case 12: cout<<"Diciembre.\n"<< endl;break;
		
		default: 
		cout<<"se equivoco de numero.\n";
		break;
	}
	

	system("pause");
	
	return 0;
	
}


