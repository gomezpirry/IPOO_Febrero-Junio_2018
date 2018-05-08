#ifndef FACULTAD_H
#define FACULTAD_H
#include <string>
using namespace std;

class facultad
{
string nombre;
int edificio;

public:

facultad();
~facultad();
void darnombre (string nombre);
string obtenernombre ();
void daredificio(int edificio);
int obteneredificio();

};
#endif

