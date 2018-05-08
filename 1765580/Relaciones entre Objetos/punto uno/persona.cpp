#include "persona.h"

using namespace std;




persona::persona() {

}

persona::~persona() {

}


void persona::darNombre(string nombre){
this->nombre=nombre;
}


string persona::obtenernombre(){
return nombre;
}

void persona::darapellido(string apellido){
this->apellido=apellido;

}

string persona::obtenerapellido(){
return apellido;
}

void persona::darcedula(int cedula){
identificacion=cedula;
}

