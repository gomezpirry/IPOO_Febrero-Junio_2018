#include "docente.h"
#include "curso.h"
using namespace std;



docente::docente(){
}
docente::~docente(){

}


void docente::darcargahoraria(int cargahoraria){
this->cargahoraria=cargahoraria;
}


int docente ::obtenercargahoraria(){
return cargahoraria;
}

void docente::darescalafon(string escalafon){
this->escalafon=escalafon;

}

string docente::obtenerescalafon(){
return escalafon;
}

void docente::dictarcurso(int codigocurso){
	curso cur=curso();
	cur.darcodigo(codigocurso);
}
