//------------------------------------------
//------ Calificación 0.3
//
// * Separo decimales con coma
// * No implemento el pago 
//------------------------------------------

/*6. Se requiere hacer una peque�no programa que realice los c�alculos de una caja registradora
con las siguientes caracter�isticas.
Inicialmente la caja solicita el n�umero de d�ia calendario que se realiza la compra
y solicita si el d�ia es festivo o no (1 = festivo, 0 = no festivo)
La caja maneja hasta 5 productos, por lo tanto debe solicitar los precios de cada
producto (los valores est�an dado en dolares) (Pista: Utilice sentencia for para
solicitar los 5 valores)
La caja calcula el valor del sub total de la compra (suma del valor de los productos)
y convertirlos a pesos para mostrarlo en pantalla. Para el c�alculo del total se debe
tener en cuenta que si el d�ia de la compra es m�ultiplo de 5, hay un descuento del
7 %; este descuento no aplica si es festivo
La caja debe tambi�en calcular el valor total del iva, que es el 16 % del sub total,
adicionarlo al sub total y mostrar en consola tanto el iva como el total con iva
Finalmente el programa solicita el valor del dinero con que se va a pagar y muestra
cuanto es el cambio. El programa solicita el valor del dinero con que se va a pagar
hasta que este valor sea mayor al total de los productos, si es menor muestra un
mensaje diciendo que falta dinero.*/

#include <iostream>

using namespace std;

int main(){
	int diaCalendario;
	int festivo;
	double valorUnitario;
	double subtotal=0;
	double total;

	cout << "indique el dia calendario: ";
	cin >> diaCalendario;
	cout << endl;
	cout << "indique si es festivo (1 para festivo ::: 0para para normal): ";
	cin >> festivo;
	cout << endl;

	for(int i=1; i<=5; i++){
        cout <<"ingrese el valor del producto "<< i << ": ";
        cin >> valorUnitario;
        cout << endl;
        subtotal += valorUnitario;
	}

	subtotal *= 2857,14286;  /// El decimal se separa con un punto no con coma 
	cout <<"subtotal: " << subtotal << endl;
	if(((diaCalendario % 5)== 0)&(festivo==0)){
        subtotal =subtotal-(subtotal*0.07);
        cout << "aplica para descuento del 7%: " << subtotal<< endl;
	}

	total=(subtotal*0.16)+subtotal;
	cout<<"valor total compra: " << total << endl;


/// Falta implementar la opcion de recibir el dinero y calcular el cambio
	/// Usa un ciclo para que solicite el dinero hasta que el valor de pago sea mayor al total de la compra 
    return 0;
}
