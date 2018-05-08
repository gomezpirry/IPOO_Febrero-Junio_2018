#include "universidad.h"

using namespace std;


universidad::universidad(){
}
universidad::~universidad() {

}


void universidad::darnombre(string nombre){
    this->nombre=nombre;
}


string universidad ::obtenernombre(){
return nombre;
}

void universidad::dardireccion(string direccion){
this->direccion=direccion;

}

string universidad::obtenerdireccion(){
return direccion;
}
void operation();
