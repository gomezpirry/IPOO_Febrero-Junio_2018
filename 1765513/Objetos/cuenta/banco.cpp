#include"banco.h"
#include<string>
#include<iostream>
using namespace std;

cuenta::cuenta()
{
	cuenta2 = 1105;
	contrase = 1204;
	ahorro = 500;
    numero= 0.0;
    cuentav2 = 0.0;
    contrasev2 = 0.0;
}
void  cuenta::suma()
{
	ingresarr();
cout<<"ingrese el valor";
cin>>numero;
	ahorro + numero;

	imprimirr();
}
void cuenta:: resta()
{
	// Debes validar que los fondos sean suficientes para el retiro
	cout<<"ingrese el valor";
	cin>>numero;
	ingresarr();

	ahorro - numero;

	imprimirr();
}
void cuenta::ingresarr()
{
	cout<<"digite el numero";
	cin>>numero;
}

void cuenta :: imprimirr()
{
	// El mensaje seria su cuenta tiene << ahorro;
	cout<<"su cuenta es"<<ahorro;
}
void cuenta :: pantalla()
{
	cout<<"digite su numero de cuenta";
	cout<<"digite su contraseña";
}

