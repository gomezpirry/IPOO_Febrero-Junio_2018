#include "Cuenta.h"
#include <iostream>
#include <fstream>

using namespace std;

Cuenta::Cuenta(){
	nombre = "HECTOR RODRIGUEZ";
	numCuenta = 985203;
	password = 1765639;
	fondosTotales = 0;
	fondos = 0;
	retirar = 0;
}

void Cuenta::infoCuenta(){
	cout<<"Nombre :"<<nombre<<endl;
	cout<<"Usuario: "<<numCuenta<<endl;
	cout<<"Contraseña: ****";
	cout<<"Fondos Totales: "<<fondosTotales;
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

void Cuenta::consultarFondos(){
	system("cls");
	cout<<"Tienes $"<<fondosTotales<<" en total\n";
}

void Cuenta::ingresarFondos(){
	system("cls");
	cout<<"\nEscribe la cantidad de fondos que desea ingresar: ";cin>>fondos;
	fondosTotales += fondos;
	cout<<"\nTienes $"<<fondosTotales<<" en total";
	retirar=0;
	imprimir();
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
	fondos=0;
	
	imprimir();
	
}

void Cuenta::menu(){
	
	cout<<"\n\t\t****************************************************\n";
    cout<<"\t\t*\t\tBANCO CAICEDO                  *\n";
    cout<<"\t\t*\t\t                                   *\n";
    cout<<"\t\t*\t\t1)Consultar fondos                 *\n";
    cout<<"\t\t*\t\t2)Ingresar Dinero                  *\n";
    cout<<"\t\t*\t\t3)Retirar Dinero                   *\n";
    cout<<"\t\t*\t\t4)Informacion de la cuenta         *\n";
    cout<<"\t\t****************************************************\n";
    cout<<"\n OPCION: ";
}
bool Cuenta::exite () {
	
	char direccion [] ="D:\\transaccion.txt";
	FILE *fd;
	fd= fopen (direccion, "r");
	if (fd==NULL){
		fclose (fd);
		return false;
	}
	fclose (fd);
	return true;
	
}


void Cuenta :: imprimir (){
	string nombre_archivo = "transaccion";
	string ruta = "D:\\" + nombre_archivo +".txt";
	if (exite ()){
		ifstream entrada (ruta.c_str (), std::ifstream::out);
		char cadena[1250];
		entrada.getline(cadena,1250);
		ofstream transaccion (ruta.c_str()) ;
		transaccion<<string(cadena);
		transaccion<<"\n______________________________________________________________________________________________________\n";
		transaccion <<"Nombre de usuario: "<< nombre<<endl ;
		transaccion << "Numero de cuenta: "<<numCuenta <<endl;
		transaccion << "Contraseña: " <<endl;
		transaccion << "Fondos Actuales: "<<fondosTotales <<endl; 
		transaccion << "fondos ingresados:" << fondos<<endl ;
		transaccion << "Cantidad a retirar: "<<retirar ;
		transaccion.close () ;
		
	}else{
		ofstream transaccion (ruta.c_str()) ;
		transaccion <<"Nombre de usuario: "<< nombre<<endl ;
		transaccion << "Numero de cuenta: "<<numCuenta <<endl;
		transaccion << "Contraseña: " <<endl;
		transaccion << "Fondos Actuales: "<<fondosTotales <<endl; 
		transaccion << "fondos ingresados:" << fondos<<endl ;
		transaccion << "Cantidad a retirar: "<<retirar ;
		transaccion.close () ;
	}
	 
	
	
	
	
	
	
}

