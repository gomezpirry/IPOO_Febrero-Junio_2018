#include"Curso.h"

Curso::Curso(){

}
Curso::~Curso(){

}
void Curso::DarCodigo(int codigo){

	this->codigo=codigo;
}

int Curso::ObtenerCodigo(){

	return codigo;
}
void Curso::DarNombre(string nombre){

	this->nombre= nombre;
}

string Curso::ObtenerNombre(){

}

void Curso::Darcreditos(int creditos){

	this->creditos= creditos;
}
int Curso::ObtenerCreditos(){

	return creditos;
}

