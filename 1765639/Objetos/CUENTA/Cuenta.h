#ifndef Cuenta_H
#define Cuenta_H
#include <iostream>
#include "math.h"

using namespace std;
class Cuenta{
	
	private:
		string nombre;
		 int numCuenta;
		int password;
		int numCuenta2;
		int clave;
		long double fondosTotales;
		long double fondos;
		long double retirar;
		void insertar();
		void imprimir();
		bool exite ( );
	
	public:
		Cuenta();
		void ingresarSistema();
		void consultarFondos();
		void ingresarFondos();
		void retirarFondos();
		void infoCuenta();
		void menu();
		//void imprimir();
};


#endif
