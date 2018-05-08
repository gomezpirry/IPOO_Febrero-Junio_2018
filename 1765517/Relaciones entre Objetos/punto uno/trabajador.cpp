#include "trabajador.h"

using namespace std;



trabajador::trabajador() {

}

trabajador::~trabajador() {

}


void trabajador::darcargo(string cargo){
this->cargo=cargo;
}


string trabajador ::obtenercargo(){
return cargo;
}

void trabajador::darsalario(float salario){
    this->salario=salario;
}

float trabajador::obtenersalario(){
return salario;
}


