#ifndef __TRABAJADOR_H__
#define __TRABAJADOR_H__
#define string.h

class Trabajador{
	private:
		string cargo;
		float salario;
	public:
		Trabajador()
		void darCargo(string cargo);
		string obtenerCargo();
		void darSalario(float salario);
		float obtenerSalario();
};

#endif
