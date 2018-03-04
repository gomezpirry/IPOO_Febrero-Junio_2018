//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*3. Realice un programa que reciba un entero entre 1 y 12 e imprima a que mes corresponde.
El programa debe validar si el entero que se ingresa esta en el rango solicitado, sino
debe mostrar un mensaje.*/

#include <iostream>

using namespace std;

int main(){
int numero;
	cout << "ingrese un numero: ";
	cin >> numero;

// OK
	switch(numero){
		case 1:
			cout <<"enero \n\n";
		break;
		case 2:
			cout <<"febrero \n\n";
		break;
		case 3:
			cout <<"marzo i\n\n";
		break;
		case 4:
			cout <<"abril o\n\n";
		break;
		case 5:
			cout <<"mayo \n\n";
		break;

		case 6:
			cout <<"junio\n\n";
		break;
		case 7:
			cout <<"julio \n\n";
		break;
		case 8:
			cout <<"agosto \n\n";
		break;
		case 9:
			cout <<"septiembre \n\n";
		break;
		case 10:
			cout <<"octubre \n\n";
		break;
		case 11:
			cout <<"noviembre \n\n";
		break;
		case 12:
			cout <<"diciembre\n\n";
		break;
		default:
			cout  << "imposible \n\n";
		break;

	}
}




