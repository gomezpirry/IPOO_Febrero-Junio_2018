#ifndef Persona_h_
#define Persona_h_

#include <string>

using namespace std;

class Persona {
private:
	string 	nombre;
	string 	apellido;
	int 	identificacion;

public:
	Persona();
	Persona(int identificacion, string nombre, string apellido);
	~Persona();

	void 	darNombre(string nombre);
	string	obtenerNombre();
	void	darApellido(string apellido);
	string 	obtenerApellido();
	void	darIdentificacion(int identificacion);
	int		obtenerIdentificacion();

};

#endif /* Persona_h_ */
