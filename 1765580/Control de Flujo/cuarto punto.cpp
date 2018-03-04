//------------------------------------------
//------ Calificación 0.35
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


	char opc;
  
  // Falta desplegar las opciones del menu en pantalla
    /// Despues de una operación no solicita los datos nuevamente
	cout << "ingrese oPC: ";
	cin >>  opc;
	switch(opc){
		case 's':
		    cout << "ingrese primer numero: ";
            cin >>  n1;
            cout << "ingrese segundo numero: ";
            cin >>  n2;
			cout <<n1+n2<<" \n\n";
		break;
		case 'r':
		    cout << "ingrese primer numero: ";
            cin >>  n1;
	        cout << "ingrese segundo numero: ";
	        cin >>  n2;
			cout <<n1-n2<<" \n\n";
		break;
		case 'm':
		    cout << "ingrese primer numero: ";
	        cin >>  n1;
	        cout << "ingrese segundo numero: ";
	        cin >>  n2;
			cout <<n1*n2<<" \n\n";
		break;
		case 'd':
		    cout << "ingrese primer numero: ";
	        cin >>  n1;
	        cout << "ingrese segundo numero: ";
	        cin >>  n2;
			cout <<n1/n2<<" \n\n";
		break;
		case 'p':
		    cout << "ingrese primer numero: ";
	        cin >>  n1;
			cout <<n1/100<<" \n\n";  // La operacion de porcentaje requiere dos valores
		break;
	}
}
