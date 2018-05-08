

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include<string>
#include"Facultad.h"
#include "Persona.h"
#include"Curso.h"

using namespace std;

/// Falto agregar la relación de herencia
class Estudiante{
private:
	int codigo;
	string plan;
	int edad;
	/// Falta agregar la relacion con los cursos
public:
	Estudiante();
	virtual~Estudiante();
	void DarCodigo(int codigo);
	int ObtenerCodigo();
	void DarPlan (string plan);
	string ObtenerPlan();
	void DarEdad(int edad);
	int ObtenerEdad();

};




#endif /* ESTUDIANTE_H_ */
