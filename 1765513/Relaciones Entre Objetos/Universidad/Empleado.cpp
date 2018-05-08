#include"Empleado.h"

Empleado:: Empleado(){

}
Empleado::~Empleado(){

}

void Empleado::DarCategoria(int categoria){

	this-> categoria = categoria;

}

int Empleado::ObtenerCategoria(){


	return categoria;
}
