

#ifndef PERSONA_H_
#define PERSONA_H_
#include<string>

using namespace std;

class Persona {

private:
	string nombre;
	string apellido;
	int identificacion;

public:
	Persona ();
	~Persona();

	void DarNombre (string nombre);

	string ObtenerNombre();

	void DarApellido(string apellido);

	string ObtenerApellido();

	void DarCedula(int cedula);

	int ObtenerCedula();
};




#endif /* PERSONA_H_ */
