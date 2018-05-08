
#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include<string>
#include"Trabajador.h"

using namespace std;

/// Falto agregar la relación de herencia
class Empleado{

private:
	int categoria;

public:
	Empleado();
	~Empleado();
	/// Como recomendacion, los identificadores de las funciones en miniscula
	void DarCategoria(int categoria);
	int ObtenerCategoria();
};




#endif /* EMPLEADO_H_ */
