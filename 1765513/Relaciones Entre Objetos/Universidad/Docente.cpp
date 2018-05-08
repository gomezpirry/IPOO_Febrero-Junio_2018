#include"Docente.h"

Docente::Docente(){

}

Docente::~Docente(){

}

void Docente::DarCargaHoraria(int cargahoraria){
this->cargahoraria=cargahoraria;
}

int Docente::ObtenerCargaHoraria(){

	return cargahoraria;
}
void Docente ::DarEscalafon (string escalafon){

	this-> escalafon = escalafon;
}

string Docente::ObtenerEscalafon(){

	return escalafon;
}

