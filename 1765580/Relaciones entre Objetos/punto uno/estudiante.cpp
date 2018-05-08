#include "estudiante.h"

using namespace std;


estudiante::estudiante(){
}
estudiante::~estudiante() {

}


void estudiante::darcodigo(int codigo){
    this->codigo=codigo;
}


int estudiante ::obtenercodigo(){
return codigo;
}

void estudiante::darplan(string plan){
this->plan=plan;

}

string estudiante::obtenerplan(){
return plan;
}
void estudiante::daredad(int edad){
this->edad=edad;

}

int estudiante::obteneredad(){
return edad;
}
