#include "Universidad.h"


Universidad::Universidad(string nombre, string direccion, bool publica) {

	this->nombre = nombre;
	this->publica = publica;
	this->direccion = direccion;
}

Universidad::Universidad() {
	

}

Universidad::~Universidad() {

}

void Universidad::darNombre(string nombre) {
	this->nombre = nombre;
}

int Universidad::obtenerNombre() {
	return nombre;
}

void Universidad::darDireccion(string direccion) {
	this->direccion = direccion;
}

int Docente::obtenerDireccion() {
	return direccion;
}

bool Universidad::operacion(publica == true) {
	this->publica = publica;
}
