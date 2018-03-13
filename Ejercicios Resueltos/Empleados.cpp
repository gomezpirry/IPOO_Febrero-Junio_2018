//============================================================================
// Name        : Caja.cpp
// Author      : Augusto Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
#include <cctype>
#include <iomanip>

using namespace std;

struct Empleado{
	string 	nombre;
	string 	apellido;
	int 	id;
	int		antiguedad;
	int 	salario;
};

void mostrarEmpleado(Empleado empleado){

	cout << "\nIdentificacion: " << empleado.id 		<< "\n";
	cout << "Nombre:         " << empleado.nombre 		<< "\n";
	cout << "Apellido:       " << empleado.apellido 	<< "\n";
	cout << "Antiguedad:     " << empleado.antiguedad 	<< "\n";
	cout << "Salario:        " << empleado.salario		<< "\n";

}

void menu(){

	cout << "\n---- Gestion de Empleados --------\n";
	cout << "\t (A) -> Agregar Empleado\n";
	cout << "\t (B) -> Buscar  empleado mediante la identificacion\n";
	cout << "\t (C) -> Numero de Empleados Agregados\n";
	cout << "\t (D) -> Buscar empleados con un salario mayor a un valor\n";
	cout << "\t (E) -> Buscar empleados con un salario menor a un valor\n";
	cout << "\t (F) -> Calcular el pago de un empleado\n";
	cout << "\t (G) -> Buscar empleados con una antigüedad mayor a un valor\n";
	cout << "\t (H) -> Buscar empleados con una antigüedad menor a un valor\n";
	cout << "\t (I) -> Mostrar todos los empleados\n";
	cout << "\t (S) -> Salir del Programa\n";
	cout << "------------------------------------\n\n";

}

void agregarEmpleado(Empleado *empleados, int &nEmpleados){

	Empleado nuevoEmpleado = {};

	system("cls");
	cout << "------ Agregar Empleado --------\n";
	cout << "Ingrese nombre: ";
	cin >> nuevoEmpleado.nombre;

	cout << "Ingrese apellido: ";
	cin >> nuevoEmpleado.apellido;

	bool existe;
	int id = 0;
	const int n = nEmpleados;
	int ids[n];

	for(int i = 0; i < n; i++){
		ids[i] = empleados[i].id;
	}

	do {
		existe = false;
		cout << "Ingrese identificacion: ";
		while(!(cin >> id)){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Valor Invalido\n\nIngrese identificacion: ";
		}

		for(int i = 0; i < n; i++){
			if(id == ids[i]){
				cout << "La identificacion ya existe\n";
				existe = true;
			}
		}

		if(!existe)
			nuevoEmpleado.id = id;
	}
	while(existe);

	cout << "Ingrese antiguedad: ";
	while(!(cin >> nuevoEmpleado.antiguedad)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese antiguedad: ";
	}

	cout << "Ingrese salario: ";

	while(!(cin >> nuevoEmpleado.salario)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese salario: ";
	}

	empleados[nEmpleados] = nuevoEmpleado;
	nEmpleados++;

	cout << "\nEmpleado Agregado\n";
	mostrarEmpleado(nuevoEmpleado);
}

Empleado buscarEmpleado(Empleado* empleados, int nEmpleados){

	int id = 0;

	Empleado empleado;

	cout << "------ Buscar Empleado --------\n";
	cout << "Ingrese identificacion: ";

	while(!(cin >> id)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese identificacion: ";
	}


	for(int i = 0; i < nEmpleados; i++){
		if(empleados[i].id == id){
			empleado = empleados[i];
			mostrarEmpleado(empleado);
			return empleado;
		}
	}

	cout << "\nEmpleado no encontrado\n";
	return empleado;
}


void buscarSalarioMayor(Empleado * empleados, int nEmpleados){

	float salario = 0;

	cout << "------ Buscar Empleados por salario mayor a --------\n";
	cout << "Ingrese salario: ";
	while(!(cin >> salario)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese salario: ";
	}

	for(int i = 0; i < nEmpleados; i++){
		if(empleados[i].salario > salario){
			mostrarEmpleado(empleados[i]);
			cout << "\n";
		}
	}
}

void buscarSalarioMenor(Empleado * empleados, int nEmpleados){

	float salario = 0;

	cout << "------ Buscar Empleados por salario menor a --------\n";
	cout << "Ingrese salario: ";
	while(!(cin >> salario)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese salario: ";
	}

	for(int i = 0; i < nEmpleados; i++){
		if(empleados[i].salario < salario){
			mostrarEmpleado(empleados[i]);
			cout << "\n";
		}
	}
}

void calcularPago(Empleado *empleados, int nEmpleados){


	cout << "------ Calcular pago de empleado  --------\n";
	Empleado temp = buscarEmpleado(empleados, nEmpleados);

	int diasTrabajados = 0;
	if(!(temp.nombre == "")){
		cout << "Ingrese el numero de dias Trabajados: ";
		while(!(cin >> diasTrabajados)){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Valor Invalido\n\nIngrese el numero de dias Trabajados: ";
		}

		float salarioDia = (float)temp.salario/30;
		cout << "\nPago por dia: " << salarioDia << "\n";
		cout << "Pago Total:     " << (int)salarioDia * diasTrabajados << "\n";
	}

}

void buscarAntiguedadMayor(Empleado * empleados, int nEmpleados){

	int antiguedad = 0;

	cout << "------ Buscar Empleados por antiguedad mayor a --------\n";
	cout << "Ingrese antiguedad: ";
	while(!(cin >> antiguedad)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese antiguedad: ";
	}

	for(int i = 0; i < nEmpleados; i++){
		if(empleados[i].antiguedad > antiguedad){
			mostrarEmpleado(empleados[i]);
			cout << "\n";
		}
	}
}

void buscarAntiguedadMenor(Empleado * empleados, int nEmpleados){

	int antiguedad = 0;

	cout << "------ Buscar Empleados por antiguedad menor a --------\n";
	cout << "Ingrese antiguedad: ";
	while(!(cin >> antiguedad)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Valor Invalido\n\nIngrese antiguedad: ";
	}

	for(int i = 0; i < nEmpleados; i++){
		if(empleados[i].antiguedad < antiguedad){
			mostrarEmpleado(empleados[i]);
			cout << "\n";
		}
	}
}

void mostrarTodosEmpleados(Empleado *empleados, int nEmpleados){

	for(int i = 0; i < nEmpleados; i++){
		mostrarEmpleado(empleados[i]);
		cout << "\n";
	}
}

int main(){

	Empleado empleados[10] = {};

	empleados[0] = {"Andres", "Ortega", 1, 2, 1500000};
	empleados[1] = {"Tian", "Gomez", 2, 5, 3000000};
	empleados[2] = {"Luisa", "Blandon", 3, 2, 1600000};
	empleados[3] = {"Aleja", "Hoyos", 4, 2, 1500000};

	int numeroEmpleados = 4;

    string opcion;
    char operacion, op;

    do{
    	system("cls");
    	menu();
    	cout << "Ingrese una opcion: ";
    	cin >> opcion;

    	if(opcion.size()!= 1){
    		cout << "\nIngrese una opcion valida\n\n";
    		continue;
    	}

    	operacion = opcion[0];
    	op = toupper(operacion);

    	switch(op){
    		case 'A':
    			system("cls");
    			agregarEmpleado(empleados, numeroEmpleados);
    			system("pause");
    			break;
    		case 'B':
    			system("cls");
    			buscarEmpleado(empleados, numeroEmpleados);
    			system("pause");
				break;
    		case 'C':
    			system("cls");
				cout << "En total hay " << numeroEmpleados << " empleados\n";
				system("pause");
				break;
			case 'D':
				system("cls");
				buscarSalarioMayor(empleados, numeroEmpleados);
				system("pause");
				break;
			case 'E':
				system("cls");
				buscarSalarioMenor(empleados, numeroEmpleados);
				system("pause");
				break;
			case 'F':
				system("cls");
				calcularPago(empleados, numeroEmpleados);
				system("pause");
				break;
			case 'G':
				system("cls");
				buscarAntiguedadMayor(empleados, numeroEmpleados);
				system("pause");
				break;
			case 'H':
				system("cls");
				buscarAntiguedadMenor(empleados, numeroEmpleados);
				system("pause");
				break;
			case 'I':
				system("cls");
				mostrarTodosEmpleados(empleados, numeroEmpleados);
				system("pause");
				break;
    		case 'S':
    			cout << "Hasta pronto\n";
    			break;
    		default:
    			cout << "\nIngrese una opcion valida\n\n";
    			break;
    	}

    }
    while(op != 'S');

}
