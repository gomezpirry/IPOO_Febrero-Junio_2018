#include "Universo.h"

Universo::Universo()
{
}

Universo::~Universo()
{
}

void Universo::darNumero(int numero) {
	this->numero = numero;
}

int Universo::obtenerNumero() {
	return numero;
}



void Universo::darNombre(string nombre) {
	this->nombre = nombre;
}

string Universo::obtenerNombre() {
	return nombre;
}
