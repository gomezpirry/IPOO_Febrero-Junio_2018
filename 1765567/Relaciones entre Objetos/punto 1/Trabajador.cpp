#include "Trabajador.h"


Trabajador::Trabajador(float salario, string cargo) {

	this->cargo = cargo;
	this->salario	= salario;


}

Trabajador::Trabajador() {
	

}

Trabajador::~Trabajador() {

}

void Trabajador::darCargo(string cargo) {
	this->cargo = cargo;
}

string Trabajador::obtenerCargo() {
	return cargo;
}

void Trabajador::darSalario(float salario) {
	this->salario = salario;
}

string Persona::obtenerSalario() {
	return salario;
}


