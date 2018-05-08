#ifndef Estudiante_h_
#define Estudiante_h_

#include <string>

using namespace std;

class Estudiante {
private:
	int 	codigo;
	string 	nombre;
	int     edad;

public:
	Estudiante();
	Estudiante(int codigo, string nombre, int edad);
	~Estudiante();

	void 	darCodigo(int codigo);
	int 	obtenerCodigo();
	void 	darNombre(string nombre);
	string 	obtenerNombre();
	void    darEdad(int edad);
	int     obtenerEdad();
	
	
};

#endif /* Estudiante_h_ */
