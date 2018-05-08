#ifndef DIOSES_H
#define DIOSES_H
#include <universo.h>
#include <string>

using namespace std;

class dioses
{
	private:
		    string nombre;
		    float nivelCuracion;
	
	public:
		dioses();
		~dioses();
		
		void    darNombre(string nombre);
		string  obtenerNombre();
		void    darNivelCuracion(float nivelCuracion);
		float   obtenerNIvelCuracion();
		

};

#endif
