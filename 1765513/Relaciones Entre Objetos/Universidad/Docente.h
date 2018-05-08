
#ifndef DOCENTE_H_
#define DOCENTE_H_
#include<string>
#include"Trabajador.h"
using namespace std;

/// Flato agregar la herencia
class Docente{

private:
	int cargahoraria;
	string escalafon;
	/// Falta la relacion con los cursos 
public:
	Docente();
	~Docente();

    /// Como recomendacion, los identificadores de las funciones en miniscula
	void DarCargaHoraria(int cargahoraria);
	int ObtenerCargaHoraria();
	void DarEscalafon(string escalafon);
	string ObtenerEscalafon();
	void DictaCurso(int codigocurso);

};



#endif /* DOCENTE_H_ */
