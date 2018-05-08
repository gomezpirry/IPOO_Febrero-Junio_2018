#include "empleado.h"

empleado::empleado()
{
}

empleado::~empleado()
{
}

void empleado::darCategoria(int categoria) {
	this->categoria = categoria;
}

int empleado::obtenerEmpleado() {
	return categoria;
}
