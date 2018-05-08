#ifndef PERSONAS_H
#define PERSONAS_H
#include <dioses.h>
#include <string>
#include <dioses.h>
#include  <string>

using namespace std;


class Personas
{
	private: 
	       string nombre;
	       string raza;
	       int edad;
	       dioses reprecentante;
	       
	
	public:
		Personas();
		~Personas();
		
		void    darNombre(string nombre);
		string  obtenerNombre();
		void    darRaza(string raza);
		string  obtenerRaza();
		void    darEdad(int edad);
		int     obtenerEdad();
		void    darReprecentante(dioses reprecentante);
	
};

#endif
