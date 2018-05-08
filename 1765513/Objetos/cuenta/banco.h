
#ifndef BANCO_H_
#define BANCO_H_
#include<conio.h>
#include <windows.h>
#include <iostream>
#include <cmath>
class cuenta {

private:
	int cuenta2;
	int contrase;
	int ahorro;
	int cuentav2;
	int contrasev2;
	int numero;
	void imprimirr();
	void ingresarr();
public:

	cuenta();

	void pantalla(); // los metodos generalmente van asociados a acciones
	void suma();
	void resta();
};



#endif
