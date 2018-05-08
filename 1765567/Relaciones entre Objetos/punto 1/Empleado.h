#ifndef Empleado_h_
#define Empleado_h_

#include <string>

using namespace std;

class Empleado {
private:
	int	categoria;
	

public:
	Empleado();
	Empleado(int cedula, string nombre, string apellido);
	~Empleado();

	void darCategoria(int categoria);
	int	obtenerCategoria();
	

};

#endif /* Empleado_h_ */
