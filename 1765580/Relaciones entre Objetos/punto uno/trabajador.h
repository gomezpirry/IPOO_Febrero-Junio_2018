#ifndef trabajdor_h
#define trabajador_h
#include <string>
#include "persona.h"
using namespace std;

class trabajador:public persona{

 private:
string cargo;
float salario;



public:

trabajador();
~trabajador();
void darcargo (string cargo);
string obtenercargo ();
void darsalario(float cargo);
float obtenersalario();

};
#endif // persona_h
