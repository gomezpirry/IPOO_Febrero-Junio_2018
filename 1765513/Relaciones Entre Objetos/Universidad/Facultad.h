

#ifndef FACULTAD_H_
#define FACULTAD_H_
#include<string>
#include"Docente.h"
#include"Universidad.h"
#include "curso.h" /// El archivo es Curso.h, reconoce mayusulas y minisculas
#include "Estudiante.h"
using namespace std;

class Facultad{

private:
	string nombre;
	int edificio;
	/// Falta agregar la relación con los estudiantes
public:
	Facultad();
	~Facultad();

	void DarNombre (string nombre);
	string ObtenerNombre();
	void DarEdificio(int edificio);
	int ObtenerEdificio();
};




#endif /* FACULTAD_H_ */
