#ifndef Trabajador_h_
#define Trabajador_h_

#include <string>

using namespace std;

class Trabajador {
private:
	
	string 	cargo;
	float   salario;

public:
	Trabajador();
	Trabajador(string cargo, float salario);
	~Trabajador();

	void 	darCargo(string cargo);
	string 	obtenerCargo();
	void    darSalario(float salario);
	float     obtenerSalario();
	
	
};

#endif /* Trabajador_h_ */
