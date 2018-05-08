
#ifndef UNIVERSIDAD_H_
#define UNIVERSIDAD_H_
#include <string>
#include "Facultad.h"
using namespace std;

class Universidad{
private:
	string nombre;
	string direccion;
	bool publica;

public:
	Universidad();
	~Universidad();

	void DarNombre(string nombre);
	string ObtenerNombre();
	void DarDireccion(string direccion);
	string ObtenerDireccion();


};




#endif /* UNIVERSIDAD_H_ */
