
#ifndef CURSO_H_
#define CURSO_H_
#include<string>
#include"Facultad.h"
#include"Estudiante.h"

using namespace std;

class Curso {

private:
	int codigo;
	string nombre;
	int creditos;
public:
	/// Como recomendacion, los identificadores de las funciones en miniscula
	Curso();
	~Curso();
	void DarCodigo(int codigo);
	int ObtenerCodigo();
	void DarNombre(string nombre);
	string ObtenerNombre();
	void Darcreditos(int creditos);
	int ObtenerCreditos();
};



#endif /* CURSO_H_ */
