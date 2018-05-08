#include "facultad.h"

facultad::facultad()
{
}

facultad::~facultad()
{
}

void facultad::darNombre(string nombre) {
	this->nombre = nombre;
}
string facultad::obtenerNombre() {
	return nombre;
}

void facultad::darEdificio(int edificio) {
	this->edificio = edificio;
}
int facultad::obtenerEdificio() {
	return edificio;
}

