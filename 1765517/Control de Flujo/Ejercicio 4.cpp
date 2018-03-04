//------------------------------------------
//------ Calificación 0.4
//
//------------------------------------------

/*4. Realice un menu para interactuar en consola basado en las operaciones calculadora. El
programa debe mostrar las siguientes opciones:
Sumar
Restar
Multiplicar
Dividir
Calcular Porcentaje
Cada opcion tiene asociada una letra. El usuario escribe la letra correspondiente a la
opcion y el programa debe solicitar los valores para realizar la operacion y mostrar el
1
resultado en la consola. Cada vez que se realice una operacion, el programa vuelve a
desplegar el menu. Si se elige una opcion que no se encuentre en el menu se despliega
un mensaje indicando la opcion invalida*/

#include <iostream>
using namespace std;
int main(){
double n1, n2;


	char operador;

	// Falta desplegar las opciones del menu en pantalla
	// Te falto implementar que cada vez que se realice una operación vuelva a desplegar el menu
	cout << "ingrese operacion: ";
	cin >>  operador;
	switch(operador){
		case 's':
		    cout << "Ingrese Un Numero: ";
            cin >>  n1;
            cout << "Ingrese Un Numero: ";
            cin >>  n2;
			cout <<n1+n2<<" \n\n";
		break;
		case 'r':
		    cout << "Ingrese Un Numero: ";
            cin >>  n1;
	        cout << "Ingrese Un Numero: ";
	        cin >>  n2;
			cout <<n1-n2<<" \n\n";
		break;
		case 'm':
		    cout << "Ingrese Un Numero: ";
	        cin >>  n1;
	        cout << "Ingrese Un Numero: ";
	        cin >>  n2;
			cout <<n1*n2<<" \n\n";
		break;
		case 'd':
		    cout << "Ingrese Un Numero: ";
	        cin >>  n1;
	        cout << "Ingrese Un Numero: ";
	        cin >>  n2;
			cout <<n1/n2<<" \n\n";
		break;
		case 'p':
		    cout << "Ingrese Un Numero: ";
	        cin >>  n1;
			cout <<n1/100<<" \n\n"; // La operacion de porcentaje requiere dos valores
		break;
	}
}
