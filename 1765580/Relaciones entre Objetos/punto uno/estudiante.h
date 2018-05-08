#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"

using namespace std;

class estudiante:public persona
{

private:
    int codigo;
    string plan;
    int edad;

public:

    estudiante();
    ~estudiante();
    void darcodigo (int codigo);
    int obtenercodigo ();
    void darplan(string plan);
    string obtenerplan();
    void daredad(int edad);
    int obteneredad();
};
#endif
