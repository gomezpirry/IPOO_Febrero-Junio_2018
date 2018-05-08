#include "Cuenta.h"
#include <iostream>

using namespace std;

/// No guarda en un archivo despues de cada transaccion
Cuenta::Cuenta(){
	nombre = "Manuel Alejandro";
	apellido = "Rodriguez Santa";
	numCuenta = 1765667;
	numTelefonico = "3155208155";
	password = 2711;
	fondosTotales = 0;
	fondos = 0;
	retirar = 0;
}

void Cuenta::infoCuenta(){
	cout<<"Nombre :"<<nombre<<" "<<apellido<<endl;
	cout<<"Usuario: "<<numCuenta<<endl;
	cout<<"Numero telefonico: "<<numTelefonico<<endl;
	cout<<"Contraseña: ****"<<endl;
	cout<<"Fondos Totales: "<<fondosTotales<<endl;
}

void Cuenta::ingresarSistema(){
	cout<<"\nPara ver su informacion, ingrese los datos correspondientes a su cuenta";
	cout<<"\n\nIngrese el numero de cuenta como usuario: ";cin>>numCuenta2;
	cout<<"\nIngrese la contraseña que se le asigno: ";cin>>clave;
	
	if (numCuenta == numCuenta2 && password == clave){
	   cout<<"\nHas iniciado sesion correctamente, escoge la operacion que deseas relarizar";
	}else{
		cout<<"\nLos datos ingresados no han sido encontrados en el sistema";
		ingresarSistema();		
	}
}

void Cuenta::registrarSistema(){
	
	cout<<"Escribe tu nombre: ";cin>>nombre;
	cout<<"Escribe tu apellido: ";cin>>apellido;
	cout<<"Escribe tu numero para la cuenta: ";cin>>numCuenta;
	cout<<"Escribe tu numero telefonico: ";cin>>numTelefonico;
	cout<<"Elige una clave de 4 digitos: ";cin>>password;
}

void Cuenta::consultarFondos(){
	system("cls");
	cout<<"Tienes $"<<fondosTotales<<" en total\n";
}

void Cuenta::ingresarFondos(){
	system("cls");
	cout<<"\nEscribe la cantidad de fondos que desea ingresar: ";cin>>fondos;
	fondosTotales += fondos;
	cout<<"\nTienes $"<<fondosTotales<<" en total";
	
}

void Cuenta::retirarFondos(){
	system("cls");
	cout<<"\nDigite los fondos que desea retirar :";cin>>retirar;
	if (fondosTotales > retirar){
		fondosTotales -= retirar;
		cout<<"\nTienes $"<<fondosTotales<<" en total";
	}
	else{
		cout<<"\nNo tienes fondos suficientes para retirar $"<<retirar;
		cout<<"\nTienes : $"<<fondosTotales;
	}
}

void Cuenta::menu(){
	
	cout<<"\n\t\t****************************************************\n";
    cout<<"\t\t*\t\tBANCO UNIVALLE                     *\n";
    cout<<"\t\t*\t\t                                   *\n";
    cout<<"\t\t*\t\t1)Consultar fondos                 *\n";
    cout<<"\t\t*\t\t2)Ingresar Dinero                  *\n";
    cout<<"\t\t*\t\t3)Retirar Dinero                   *\n";
    cout<<"\t\t*\t\t4)Informacion de la cuenta         *\n";
    cout<<"\t\t****************************************************\n";
    cout<<"\n OPCION: ";
}
