#include"Estudiante.h"

Estudiante::Estudiante(){

}

Estudiante::~Estudiante(){

}

void Estudiante::DarCodigo(int codigo){

	this-> codigo= codigo;

}
int Estudiante::ObtenerCodigo(){

	return codigo;
}
void Estudiante:: DarPlan (string plan){

	this -> plan = plan;
}
string Estudiante ::ObtenerPlan(){

	return plan;
}
void Estudiante::DarEdad(int edad){

	this-> edad= edad;
}

int Estudiante::ObtenerEdad(){

	return edad;
}
