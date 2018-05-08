#ifndef CURSO_H
#define CURSO_H
#include <facultad.h>
#include <docente.h> 
#include <string>

using namespace std;

class curso
{
	private: 
	
	int      codigo;
	string   nombre;
	int      creditos;
	
	
	public:
		curso();
		~curso(); 
		
		void darCodigo(int codigo);
		int  obtenerCodigo();
		void darNombre(string nombre);
		string obtenerNombre();
		void darCreditos(int creditos);
		int  obtenerCreditos();

};

#endif
