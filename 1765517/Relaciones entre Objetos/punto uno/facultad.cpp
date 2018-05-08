#include "facultad.h"

using namespace std;



facultad::facultad(){
}
facultad::~facultad() {

}


void facultad::darnombre(string nombre){
this->nombre=nombre;
}


string facultad::obtenernombre(){
return nombre;
}

void facultad::daredificio(int edificio){
this->edificio=edificio;

}

int facultad::obteneredificio(){
return edificio;
}



