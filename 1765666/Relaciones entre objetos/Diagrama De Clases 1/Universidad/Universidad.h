#ifndef __UNIVERSIDAD_H__
#define __UNIVERSIDAD_H__
#define string.h

class Universidad{
	private:
		string nombre;
		string direccion;
		boolean publica;
	public:
		Universidad()
		void darNombre(string nombre);
		string obtenerNombre();
		void darDireccion(string direccion);
		string obtenerDireccion();
		operation();
};

#endif
