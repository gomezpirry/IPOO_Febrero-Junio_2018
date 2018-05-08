#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <string>
using namespace std;

class universidad{

private:
string nombre;
string direccion;
bool publica;

public:

universidad();
~universidad();
void darnombre(string nombre);
string obtenernombre();
void dardireccion(string direccion);
string obtenerdireccion();
operation();
};
#endif

