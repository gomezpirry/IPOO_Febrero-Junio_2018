#include "cuenta.cpp"
#include <iostream>

using namespace std;

int main (int argc, char*argv[]){
	
	Cuenta cuenta;
	char respuesta [10] = "";
	string otraRespuesta = "salir";
	int opcion;
	bool ingreso = false;
	do{
	cout<<"Si ya estas registrado escribe 1 y si deseas registrarte, escribe 2: ";cin>>opcion;
	
	if (opcion == 1){
	cuenta.ingresarSistema();
	system("cls");
	}
	else if (opcion == 2 || ingreso == false){
		cuenta.registrarSistema();
		system("cls");
		cuenta.ingresarSistema();
	}else {
		cout<<"La opcion no es valida";
	}
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
		cout<<"\n\n\tSi deseas finalizar, escribe salir en otro caso Enter: ";
        cin.getline(respuesta,10);
        system("cls");
	}while(respuesta != otraRespuesta);
}
