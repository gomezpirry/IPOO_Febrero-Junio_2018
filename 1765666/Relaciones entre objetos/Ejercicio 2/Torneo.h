#ifndef __Torneo_H__
#define __Torneo_H__
#define string.h

class Torneo{
	private:
		string nombre;
		string personas;
		int identificacion;
	public:
		Torneo()
		void darNombre(string nombre);
		string obtenerNombre();
		void darPersonas(string personas);
		string obtenerPersonas();
		void darIdentificacion(int identificacion);
		int obtenerIdetificacion();
};

#endif
