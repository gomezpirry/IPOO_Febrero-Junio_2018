#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <trabajador.h> 

class empleado
{
	private:
		int categoria;
		
	public:
		empleado();
		~empleado();
	
	void darCategoria(int categoria);
	int  obtenerCategoria();
};

#endif
