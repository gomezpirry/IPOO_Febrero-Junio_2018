#include"Trabajador.h"

Trabajador::Trabajador(){

}
Trabajador::~Trabajador(){

}

void Trabajador::DarCargo(string cargo){

	this->cargo = cargo;
}
string Trabajador ::ObtenerCargo(){

	return cargo;
}
void Trabajador::DarSalario(float salario){

	this-> salario = salario;
}

float Trabajador::ObtenerSalario(){

	return salario;
}
