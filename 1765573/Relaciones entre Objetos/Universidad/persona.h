#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class persona
{
	private:
		string  nombre;
		string  apellido;
		int     identificador;
	
	public:
		persona();
		~persona();
		void    darNombre(string nombre);
		string  obtenerNombre();
		void    darApellido(string apellido);
		string  obtenerApellido();
		void    darCedula(int cedula);
		
	
};

#endif
