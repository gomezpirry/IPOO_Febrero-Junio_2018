

#ifndef TRABAJADOR_H_
#define TRABAJADOR_H_
#include<string>

#include"Persona.h"

using namespace std;

class Trabajador{
private:
	string cargo;
	float salario;
public:
	Trabajador();
	virtual~Trabajador();

	void DarCargo(string cargo);
	string ObtenerCargo();
	void DarSalario(float salario);
	float ObtenerSalario();

};




#endif /* TRABAJADOR_H_ */
