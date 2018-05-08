#include "curso.h"

using namespace std;


curso::curso(){
}
curso::~curso() {

}


void curso::darcodigo(int codigo){
    this->codigo=codigo;
}


int curso::obtenercodigo(){
return codigo;
}

void curso::darnombre(string nombre){
this->nombre=nombre;

}

string curso::obtenernombre(){
return nombre;
}
int curso::obtenercreditos(){
return creditos;
}
