#include "Empleado.h"


Empleado::Empleado(int categoria) {

	this->categoria = categoria;
	
}

Empleado::Empleado() {
	

}

Empleado::~Empleado() {

}

void Empleado::darCategoria(int categoria) {
	this->categoria = categoria;
}

int Empleado::obtenerCategoria() {
	return categoria;
}


