#include "Calculadora.h"
#include <limits>

Calculadora::Calculadora() {

}

Calculadora::~Calculadora() {
	
}

void Calculadora::darOperadores() {

	cout << "Ingrese Operador 1: ";
	while(!(cin >> operador1)){
	    cin.clear();
	    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    cout << "Valor Invalido\nIngrese Operador 1: ";
	}

	cout << "Ingrese Operador 2: ";
	while(!(cin >> operador2)){
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Valor Invalido\nIngrese Operador 2: ";
	}
}

double Calculadora::obtenerResultado() {

}

void Calculadora::suma() {

}

void Calculadora::resta() {

}

void Calculadora::multiplicacion() {

}

void Calculadora::division() {

}

void Calculadora::porcentaje() {

}

void Calculadora::potencia() {

}

void Calculadora::menu() {

	system("cls");
	cout << "-------- CALCULADORA ----------\n";
	cout << "-------------------------------\n";
	cout << "a) Suma\n";
	cout << "b) Resta\n";
	cout << "c) Multiplicacion\n";
	cout << "d) Division\n";
	cout << "e) Porcentaje\n";
	cout << "f) Potencia\n";
	cout << "g) Salir\n";

	cout << "Ingrese la opcion: ";

}

