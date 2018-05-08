#include "peliadores.h"

peliadores::peliadores()
{
}

peliadores::~peliadores()
{
}

void peliadores::darNivelVida(float NivelVida) {
	this->nivelVida = nivelVida;
}

float peliadores::obtenerNivelVida() {
	return nivelVida;
}




void peliadores::darNivelKi(float NivelKi) {
	this->nivelKi = nivelKi;
}

float peliadores::obtenerNivelKi() {
	return nivelKi;
}






void peliadores::darTipo(poderes tipo) {
	this->tipo= tipo;
}

poderes peliadores::obtenerTipo() {
	return tipo;
}

