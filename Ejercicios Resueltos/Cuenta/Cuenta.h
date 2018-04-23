#ifndef CUENTA_H_
#define CUENTA_H_

#include <string>

using namespace std;

class Cuenta {
private:
	int		numeroCuenta;
	string	password;
	float 	fondos;
	int   	numeroTransacciones;
public:
	Cuenta(int numeroCuenta, string password, float fondosInicales);
	~Cuenta();

	void 	consignacion(float cantidad);
	bool 	retiro(float cantidad);
	float  	consultaSaldo();
	int     consultarTransacciones();
	void	cambiarContrasena(string nuevaPassword);
	bool 	acceder(int numero, string pass);

};

#endif /* CUENTA_H_ */

