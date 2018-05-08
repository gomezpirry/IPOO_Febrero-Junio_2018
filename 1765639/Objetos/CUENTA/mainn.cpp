#include "cuenta.cpp"
#include <iostream>

using namespace std;

int main (int argc, char*argv[]){
	
	Cuenta cuenta;
	char respuesta [10] = "_";
	string otraRespuesta = "salir";
	int opcion;
	bool ingreso = false;
	do{
	cuenta.ingresarSistema();
	system("cls");
	}while(ingreso == true);
	do{
		cuenta.menu();
		cin>>opcion;
		
		switch (opcion){
			case 1: cuenta.consultarFondos();break;
			case 2: cuenta.ingresarFondos();break;
			case 3: cuenta.retirarFondos();break;
			case 4: cuenta.infoCuenta();break;
			default: cout<<"\nERROR, LA OPCION INGRESADA NO EXISTE";
		}
		cin.get();
		cout<<"\n\n\tSi deseas salir escriba exit en otro caso Enter: ";
        cin.getline(respuesta,10);
        system("cls");
	}while(respuesta != otraRespuesta);
}
