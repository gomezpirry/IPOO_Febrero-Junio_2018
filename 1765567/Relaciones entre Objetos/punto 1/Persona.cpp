#include "Persona.h"


Persona::Persona(int identificacion, string nombre, string apellido) {

	this->identificacion	= identificacion;
	this->nombre 	= nombre;
	this->apellido 	= apellido;

}

Persona::Persona() {
	

}

Persona::~Persona() {

}

void Persona::darNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::obtenerNombre() {
	return nombre;
}

void Persona::darApellido(string apellido) {
	this->apellido = apellido;
}

string Persona::obtenerApellido() {
	return apellido;
}

void Persona::darIdentificacion(int identificacion) {
	this->identificacion = identificacion;
}

int Persona::obtenerIdentificacion() {
	return identificacion;
}
