#include "dioses.h"

dioses::dioses()
{
}

dioses::~dioses()
{
}

void dioses::darNombre(string nombre) {
	this->nombre = nombre;
}

string dioses::obtenerNombre() {
	return nombre;
}


void dioses::darNivelCuracion(float nivelCuracion) {
	this->nivelCuracion = nivelCuracion;
}

float dioses::obtenerNivelCuracion() {
	return nivelCuracion;
}
