#ifndef CURSO_H
#define CURSO_H
#include <string>
using namespace std;
class curso
{
private:
int codigo;
string nombre;
int creditos;

public:

curso();
~curso();
void darcodigo(int codigo);
int obtenercodigo();
void darnombre(string nombre);
string obtenernombre();
int obtenercreditos();
};
#endif
