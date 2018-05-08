#include "Personas.h"

Personas::Personas()
{
}

Personas::~Personas()
{
}


void Personas::darNombre(string nombre) {
	this->nombre = nombre;
}

string Personas::obtenerNombre() {
	return nombre;
}


void Personas::darRaza(string raza) {
	this->raza = raza;
}

string Personas::obtenerRaza() {
	return raza;
}



void Personas::darEdad(int edad) {
	this->edad = edad;
}

int Personas::obtenerEdad() {
	return edad;
}




void Personas::darReprecentante(dioses reprecentante) {
	this->reprecentante = reprecentante;
}

dioses Personas::obtenerReprecentante() {
	return reprecentante;
}
