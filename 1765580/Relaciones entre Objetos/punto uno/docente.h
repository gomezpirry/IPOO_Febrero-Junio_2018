#ifndef DOCENTE_H
#define DOCENTE_H
#include <string>
#include "trabajador.h"
using namespace std;
class docente:public trabajador{

private:

int cargahoraria;
string escalafon;


public:

docente();
~docente();
void darcargahoraria (int cargahoraria);
int obtenercargahoraria ();
void darescalafon(string escalafon);
string obtenerescalafon();
void dictarcurso(int codigocurso);

};
#endif

