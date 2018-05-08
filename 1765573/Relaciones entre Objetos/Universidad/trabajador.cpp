#include "trabajador.h"

trabajador::trabajador()
{
}

trabajador::~trabajador()
{
}

void trabajador::darCargo(string cargo) {
	this->cargo = cargo;
}

string trabajador::obtenerCargo() {
	return cargo;
}

void trabajador::darSalario(float salario) {
	this->salario = salario;
}
float trabajador::obtenersalario() {
	return salario;
}

