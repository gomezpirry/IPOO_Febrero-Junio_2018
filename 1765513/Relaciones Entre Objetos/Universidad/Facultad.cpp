#include"Facultad.h"

Facultad ::Facultad(){

}

Facultad:: ~Facultad(){

}

void Facultad::DarNombre(string nombre){

this-> nombre=nombre;
}

string Facultad :: ObtenerNombre(){

	return nombre;
}

void Facultad ::DarEdificio(int edificio){

	this-> edificio = edificio;
}

int Facultad ::ObtenerEdificio(){

	return edificio;
}
