#include "persona.h"

persona::persona()
{
}

persona::~persona()
{
}

void persona::darNombre(string nombre) {
	this->nombre = nombre;
}


string persona::obtenerNombre() {
	return nombre;
}

void persona::darApellido(string apellido) {
	this->apellido = apellido;
}


string persona::obtenerApellido() {
	return apellido;
}

void persona::darCedula(int identificador) {
	this->identificador = identificador;
}



