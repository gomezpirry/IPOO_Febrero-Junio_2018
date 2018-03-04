//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*Realice un programa que reciba un entero entre 1 y 12 e imprima a que mes corresponde.
El programa debe validar si el entero que se ingresa esta en el rango solicitado, sino
debe mostrar un mensaje*/

#include<iostream>

using namespace std;

int main (){
int numero;	
	cout << "Digite Un Numero: ";
	cin >> numero;
	
	// OK
	switch (numero){
		case 1:
			cout <<"Enero \n\n";
		break;
		
		case 2: 
		    cout <<"Febrero \n\n";
		break;
		
		case 3:
		    cout <<"Marzo \n\n";	
		break;
		
		case 4:
		     cout <<"Abril \n\n";
		break;
		
		case 5:	 
		     cout <<"Mayo \n\n";
		break;
		
		case 6:
		     cout <<"Junio \n\n";
		break;
		
		case 7:
		     cout <<"Julio \n\n";
		break;
		
		case 8:
		    cout <<"Agosto \n\n";
		break;
		
		case 9:
			cout <<"Septiembre \n\n";
		break;
		
		case 10:
			cout <<"Octubre \n\n";
		break;
		
		case 11:
			cout <<"Noviembre \n\n";
		break;
		
		case 12:
		      cout <<"Diciembre \n\n";
		break;
		
		default:
		      cout <<"Fuera De Rango \n\n0";
		break; 	  	  	
			
			
	} 
	
	
return 0;
}
