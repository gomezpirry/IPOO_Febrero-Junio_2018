#ifndef __FACULTAD_H__
#define __FACULTAD_H__
#define string.h

class Facultad{
	private:
		string nombre;
		int edificio;
	public:
		Facultad()
		void darNombre(string nombre);
		string obtenerNombre();
		void darEdificio(int edificio);
		int obtenerEdificio();
};

#endif
