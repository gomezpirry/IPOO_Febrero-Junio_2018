#include "curso.h"

curso::curso()
{
}

curso::~curso()
{
}

void curso::darCodigo(int codigo) {
	this->codigo = codigo;
}

int curso::obtenerCodigo() {
	return codigo;
}




void curso::darNombre(string nombre) {
	this->nombre = nombre;
}

string curso::obtenerNombre() {
	return nombre;
}




void curso::darCreditos(int creditos) {
	this->creditos = creditos;
}

int curso::obtenerCreditos() {
	return creditos;
}
