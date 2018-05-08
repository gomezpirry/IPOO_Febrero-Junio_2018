#ifndef __DOCENTE_H__
#define __DOCENTE_H__
#define string.h

class Docente{
	private:
		int cargaHoraria;
		string escalafon;
	public:
		Docente()
		void darCargaHoraria(int cargaHoraria);
		int obtenerCargaHoraria();
		void darEscalafon(string escalafon);
		string obtenerEscalafon();
		void dictarCurso(int codigoCurso)
};

#endif
