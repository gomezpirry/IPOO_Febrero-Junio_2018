#ifndef FACULTAD_H
#define FACULTAD_H
#include <estudiante.h>
#include <string>

using namespace std;

class facultad
{
	private: 
	
	  string nombre;
	  int edificio;
	  
	public:
        facultad();
		~facultad();
		
		void    darNombre(string nombre);
		string  obtenerNombre();
		void    darEdificio(int edificio);
		int     obtenerEdificio();
};

#endif
