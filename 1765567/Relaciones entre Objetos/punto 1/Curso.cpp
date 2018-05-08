#include "Curso.h"


Curso::Curso(int codigo, string nombre, int creditos) {

	this->codigo = codigo;
	this->nombre = nombre;
	this->creditos = creditos;
}

Curso::Curso() {
	

}

Curso::~Curso() {

}

void Curso::darCreditos(int creditos) {
	this->creditos = creditos;
}

int Curso::obtenerCreditos() {
	return creditos;
}

void Docente::darNombre(string nombre) {
	this->nombre = nombre;
}

string Docente::obtenerNombre() {
	return nombre;
}

void Curso::darCodigo(int codigo) {
	this->codigo = codigo;
}

int Curso::obtenerCodigo() {
	return codigo;
}
 
 
