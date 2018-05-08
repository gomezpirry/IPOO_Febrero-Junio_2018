#ifndef Facultad_h_
#define Facultad_h_

#include <string>

using namespace std;

class Facultad {
private:
	
	string 	nombre;
	int     edificio;

public:
	Facultad();
	Facultad(string nombre, int edificio);
	~Facultad();

	void 	darNombre(string nombre);
	string 	obtenerNombre();
	void    darEdificio(int edificio);
	int     obtenerEdificio();
	
	
};

#endif /* Facultad_h_ */
