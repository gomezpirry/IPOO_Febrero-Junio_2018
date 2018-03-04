//------------------------------------------
//------ Calificación 0.6
//
// * Ciclo infinito
//------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main (){


	int n1,n2,salir = 0,suma = 0, resta = 0, multiplicacion = 0, division = 0, porcentaje = 0;
	char letra;

do{

	cout<<"\nDigite un numero:"<<endl; cin>> n1 ;
    cout<<"digite el segundo numero:"<<endl; cin>> n2;

    cout<<"S suma\nR resta\nM multiplicacion\nD division\nP porcentaje\n escriba 0 para terminar\n"<<endl;


    cout<<"Digite la operacion a realizar:"<<endl;cin >> letra;




	/// OK

	suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    porcentaje = (n1*n2)/100;




	switch(letra){
		case 'S':
			cout  << "la suma es: "<<suma;
		break;

		case 'R':
			cout  << "La resta es: "<<resta;
		break;

		case 'M':
			cout  << "La multiplicacion es: "<<multiplicacion;
		break;

		case 'D':
			cout  << "La division es: "<<division;
		break;

		case 'P':
			cout  << "El porcentaje es: "<<porcentaje;
		break;
		default:
			cout  << "La opcion no es valida \n\n";
				break;


				cout<<"\nDigite 0 si desea terminar\n";

				return 0;

	 }
      }

   while(salir != letra); // Genera un ciclo infinito cuando porque salir es 0 y letra es char (char = 0 es null)
}







