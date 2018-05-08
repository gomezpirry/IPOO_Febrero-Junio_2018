#include "Docente.h"


Docente::Docente(int cargaHoraria, string escalafon) {

	this->cargaHoraria = cargaHoraria;
	this->escalafon = escalafon;
}

Docente::Docente() {
	

}

Docente::~Docente() {

}

void Docente::darCargaHoraria(int cargaHoraria) {
	this->cargaHoraria = cargaHoraria;
}

int Docente::obtenerCargaHoraria() {
	return cargaHoraria;
}

void Docente::darEscalafon(string escalafon) {
	this->escalafon = escalafon;
}

string Docente::obtenerEscalafon() {
	return escalafon;
}
