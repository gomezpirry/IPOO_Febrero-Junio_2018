#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include <iostream>
#include "math.h"

using namespace std;

class Calculadora {
private:
	double	operador1;
	double 	operador2;
	double	resultado;
	
public:
	Calculadora();
	~Calculadora();

	// Getters and Setters
	void 	darOperadores();
	double 	obtenerResultado();

	/// Operaciones
	void 	suma();
	void	resta();
	void	multiplicacion();
	void	division();
	void	porcentaje();
	void	potencia();

	/// Interfaz
	void 	menu();
};

#endif /* CALCULADORA_H_ */
