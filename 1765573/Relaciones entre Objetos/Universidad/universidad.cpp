#include "universidad.h"

universidad::universidad()
{
}

universidad::~universidad()
{
}

void universidad::darNombre(string nombre) {
	this->nombre = nombre;
}
string universidad::obtenerNombre() {
	return nombre;
}

void universidad::darDireccion(string direccion) {
	this->direccion = direccion;
}
string universidad::obtenerDireccion() {
	return direccion;
}



bool universidad::esPublica() {
	return publica;
}

void universidad::sePublica(bool publica) {
	this->publica = publica;
}

