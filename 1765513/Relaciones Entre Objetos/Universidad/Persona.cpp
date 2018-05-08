#include "Persona.h"

Persona::Persona(){

}
Persona::~Persona(){

}

void Persona::DarNombre(string nombre){

	this-> nombre = nombre;
}

string Persona::ObtenerNombre(){

	return nombre;
}

void Persona::DarApellido(string apellido){

	this->apellido = apellido;
}

string Persona::ObtenerApellido(){

	return apellido;
}

void Persona::DarCedula(int cedula){

	cedula;
}
