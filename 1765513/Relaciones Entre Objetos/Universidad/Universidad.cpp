#include"Universidad.h"

Universidad::Universidad(){

}

Universidad::~Universidad(){

}

void Universidad::DarNombre(string nombre){

	this-> nombre= nombre;
}

string Universidad::ObtenerNombre(){

	return nombre;
}

void Universidad:: DarDireccion(string direccion){

	this-> direccion = direccion;
}

string Universidad::ObtenerDireccion(){

	return direccion;

}

