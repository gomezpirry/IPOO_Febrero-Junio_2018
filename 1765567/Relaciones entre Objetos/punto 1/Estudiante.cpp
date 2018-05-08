#include "Estudiante.h"


Estudiante::Estudiante(int codigo, string nombre, int edad) {

	this->codigo = codigo;
	this->nombre = nombre;
	this->edad = edad;
}

Estudiante::Estudiante() {
	

}

Estudiante::~Estudiante() {

}

void Estudiante::darEdad(int edad) {
	this->edad = edad;
}

int Estudiante::obtenerEdad() {
	return edad;
}

void Estudiante::darNombre(string nombre) {
	this->nombre = nombre;
}

string Estudiante::obtenerNombre() {
	return nombre;
}

void Estudiante::darCodigo(int codigo) {
	this->codigo = codigo;
}

int Estudiante::obtenerCodigo() {
	return codigo;
}
 
