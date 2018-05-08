#ifndef __CURSO_H__
#define __CURSO_H__
#define string.h

class Curso{
	private:
		int codigo;
		string nombre;
		int creditos;
	public:
		Curso()
		void darCodigo(int codigo);
		string obtenerCodigo();
		void darNombre(string nombre);
		string obtenerNombre();
		void darCrditos(int creditos)
		int obtenerCreditos();
};

#endif
