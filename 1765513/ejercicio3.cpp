//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main(){

	int numero;

	cout<< "digite el numero del mes:";cin>>numero;

/// OK
	switch(numero){
			case 1:
				cout  << "Enero ";
			break;

			case 2:
				cout  << "Febrero ";
			break;

			case 3:
				cout  << "Marzo";
			break;

			case 4:
				cout  << "Abril ";
			break;

			case 5:
				cout  << "Mayo";
			break;

			case 6:
				cout<<"junio";
				break;
			case 7:
				cout<<"julio";
				break;
			case 8:
				cout<<"Agosto";
				break;
			case 9:
				cout<<"Septiembre";
				break;
			case 10:
				cout<<"octubre";
				break;
			case 11:
				cout<<"noviembre";
			break;
			case 12:
				cout<<"Diciembre";
				break;

			default:
				cout  << "La opcion no es valida \n\n";
					break;




					return 0;

		 }

}
