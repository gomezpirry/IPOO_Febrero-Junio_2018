#ifndef DOCENTE_H
#define DOCENTE_H
#include <facultad.h>
#include <trabajador.h>
#include <string>

using namespace std;

class docente
{
	private:
		int    cargaHoraria;
		string  escalafon;
	public:
		docente();
		~docente();
		
		void darCargaHorario(int cargaHoraria);
		int  obtenerCargaHoraria();
		void darEscalafon(string escalafon);
		string  obtenerEscalafon();
	
};

#endif
