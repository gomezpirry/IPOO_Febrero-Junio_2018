#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <persona.h>
#include <curso.h>
#include <string>

using namespace std; 

class estudiante
{
	private: 
	
	    int codigo;
	    string plan;
	    int edad;
	
	public:
		estudiante();
		~estudiante();
		
		void darCodigo(int codigo);
		int  obtenerCodigo();
		void darPlan(string plan);
		string obtenerPlan();
		void darEdad(int edad);
		int  obtenerEdad();
	
};

#endif
