#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "trabajador.h"
using namespace std;

class empleado:public trabajador{
  private:
int categoria;

public:
empleado();
~empleado();
void darcategoria(int categoria);
int obtenercategoria();
};
#endif
