#ifndef __CUENTA_H__
#define __CUENTA_H__
#define <string>

class Cuenta{
private:
	int numeroCuenta;
	string password;
	float saldo;
	int numeroTransacciones;
	string nombreTitular;
public:
	Cuenta();
	~Cuenta();
	bool retirar (float valor);
	void consignacion (float valor);
	float consultarSaldo();
	int consultarTransacciones();
	bool acceder(int numeroCuenta, string password);
	
};

#endif
