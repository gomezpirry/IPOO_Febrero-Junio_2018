#include "Facultad.h"


Facultad::Facultad(string nombre, int edificio) {

	this->nombre = nombre;
	this->edificio = edificio;
}

Facultad::Facultad() {
	

}

Facultad::~Facultad() {

}


void Facultad::darNombre(string nombre) {
	this->nombre = nombre;
}

string Facultad::obtenerNombre() {
	return nombre;
}

void Facultad::darEdificio(int edificio) {
	this->edificio = edificio;
}

int Facultad::obtenerEdificio() {
	return edificio;
}
