#ifndef Universidad_h_
#define Universidad_h_

#include <string>

using namespace std;

class Universidad {
private:
	string	nombre;
	string 	direccion;
	bool    publica == true;

public:
	Universidad();
	Universidad(string nombre, string direccion, bool publica);
	~Universidad();

	void 	darNombre(string nombre);
	int 	obtenerCargaHoraria();
	void 	darDireccion(string direccion);
	string 	obtenerDireccion();
	bool    operacion(publica == true);
	
};

#endif /* Universidad_h_ */
