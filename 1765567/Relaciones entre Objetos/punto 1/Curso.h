#ifndef Curso_h_
#define Curso_h_

#include <string>

using namespace std;

class Curso {
private:
	int 	codigo;
	string 	nombre;
	int     creditos;

public:
	Curso();
	Curso(int codigo, string nombre, int creditos);
	~Curso();

	void 	darCodigo(int codigo);
	int 	obtenerCodigo();
	void 	darNombre(string nombre);
	string 	obtenerNombre();
	void    darCreditos(int creditos);
	int     obtenerCreditos();
	
	
};

#endif /* Curso_h_ */
