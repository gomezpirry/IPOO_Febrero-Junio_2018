#include <iostream>



int main(int argc, char** argv) {
	
	//Cuenta = Calculadora();
	
	/// No ha creado el objeto para hacerlas cuentas
	/// No guarda en texto las transacciones que hace
	
	int numeroRealCuenta = 1345;	
	
	cout << "----------Cuenta-----------\n";
	cout << "---------------------------\n";
	
	
	char opcion;
	bool salir = false;
	do{
		cout << "a) Acceder \n";
		cout << "b) Retirar\n";
		cout << "c) Consignacion \n";
		cout << "d) Consultar Saldo\n";
		cout << "e) Consultar Transaccion\n";
		cout << "Ingrese la opcion de la operacion que desea realizar\n";
		cin >> opcion;
	
		switch(opcion){
			case 'a':
				cout<<"Ingrese el numero de cuenta: ";
				cin>>numeroCuenta;
				if(numeroCuenta == numeroRealCuenta){
					bool = true
				}else{
					bool = false
				}
				cout << Cuenta.suma(numeroCuenta, password)
				break;
			case 'b':
				cout<<"Ingrese el valor a retirar :";
				cin >> valor;
				cout <<Cuenta.retirar(valor);
				break;
			case 'c':
				cout<<"ingrese la cantidad de la consignacion :";
				cin>>valor;
				cout << Cuenta.consignacion(valor);
				break;
			case 'd':
				cout<<"Su saldo es: ";
				cout << Cuenta.consultarSaldo();
				break;
			case 'e':
				cout << "Las transacciones que a relizado son: ";
				cout << cuenta.consultarTransacciones();
				break;
			default:
				cout << "No ingreso la opcion correcta";
				break;
		}
	}
	while(salir);
	
  

	return 0;
}
