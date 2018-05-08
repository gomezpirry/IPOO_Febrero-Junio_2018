#include "empleado.h"

using namespace std;


empleado::empleado(){
}
empleado::~empleado() {

}


void empleado::darcategoria(int categoria){
    this->categoria=categoria;
}


int empleado::obtenercategoria(){
return categoria;
}
