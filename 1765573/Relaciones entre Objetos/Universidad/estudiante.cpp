#include "estudiante.h"

estudiante::estudiante()
{
}

estudiante::~estudiante()
{
}

void estudiante::darCodigo(int codigo) {
	this->codigo = codigo;
}

int estudiante::obtenerCodigo() {
	return codigo;
}

void estudiante::darPlan(string plan) {
	this->plan = plan;
}

string estudiante::obtenerPlan() {
	return plan;
}

void estudiante::darEdad(int edad) {
	this->edad = edad;
}

int estudiante::obtenerEdad() {
	return edad;
}


