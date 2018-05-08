#include "docente.h"

docente::docente()
{
}

docente::~docente()
{
}

void docente::darCargaHoraria(int cargaHoraria) {
	this->cargaHoraria = cargaHoraria;
}
int Curso::obtenerCargaHoraria() {
	return cargaHoraria;
}

void docente::darEscalafon(string escalafon) {
	this->escalafon = escalafon;
}

string Curso::obtenerEscalafon() {
	return escalafon;
}
