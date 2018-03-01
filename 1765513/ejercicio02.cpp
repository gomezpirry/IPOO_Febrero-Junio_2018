//------------------------------------------
//------ Calificación 0.65
//
// * Verificar mensaje a mostrar
//------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main (){

	int numero;

   // OK
	cout<< "digite un numero: "; cin>>numero;

	if(numero%2==0){
		cout<<"El numero par: "; // Verificar mensaje a mostrar
	}
		else{
			cout<<"el numero es impar: ";
	}
}


