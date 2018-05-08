#ifndef Docente_h_
#define Docente_h_

#include <string>

using namespace std;

class Docente {
private:
	int 	cargaHoraria;
	string 	escalafon;
	

public:
	Docente();
	Docente(int cargaHoraria, string escalafon);
	~Docente();

	void 	darCargaHoraria(int cargaHoraria);
	int 	obtenerCargaHoraria();
	void 	darEscalafon(string escalafon);
	string 	obtenerEscalafon();
	
	
};

#endif /* Docente_h_ */
