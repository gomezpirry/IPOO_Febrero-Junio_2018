#ifndef Cuenta_H
#define Cuenta_H
#include <iostream>
#include "math.h"

using namespace std;
class Cuenta{
	
	private:
		string nombre, apellido;
		string numTelefonico;
		int numCuenta;
		int password;
		int numCuenta2;
		int clave;
		double fondosTotales;
		double fondos;
		double retirar;
		void insertar();
		void imprimir();
	
	public:
		Cuenta();
		void ingresarSistema();
		void registrarSistema();
		void consultarFondos();
		void ingresarFondos();
		void retirarFondos();
		void infoCuenta();
		void menu();
};


#endif
