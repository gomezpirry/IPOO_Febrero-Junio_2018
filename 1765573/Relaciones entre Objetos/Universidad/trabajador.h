#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <persona.h>
#include <string> 

using namespace std;

class trabajador
{
	private: 
	string cargo;
	float  salario;
	
	public:
		trabajador();
		~trabajador();
		
		void darCargo(string cargo);
		string obtenerCargo();
		void darSalario(float salario);
		float obtenerSalario();
	
};

#endif
