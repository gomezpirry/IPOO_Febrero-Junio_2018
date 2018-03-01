//------------------------------------------
//------ Calificación 0.6
//
//------------------------------------------


//. Se requiere hacer una peque�o programa que realice los calculos de una caja registradora
//con las siguientes caracteristicas.
//Inicialmente la caja solicita el n�umero de d�ia calendario que se realiza la compra
//y solicita si el d�ia es festivo o no (1 = festivo, 0 = no festivo)
//La caja maneja hasta 5 productos, por lo tanto debe solicitar los precios de cada
//producto (los valores est�an dado en dolares) (Pista: Utilice sentencia for para
//solicitar los 5 valores)
//La caja calcula el valor del sub total de la compra (suma del valor de los productos)
//y convertirlos a pesos para mostrarlo en pantalla. Para el c�alculo del total se debe
//tener en cuenta que si el d�ia de la compra es m�ultiplo de 5, hay un descuento del
//7 %; este descuento no aplica si es festivo
//La caja debe tambi�en calcular el valor total del iva, que es el 16 % del sub total,
//adicionarlo al sub total y mostrar en consola tanto el iva como el total con iva
//Finalmente el programa solicita el valor del dinero con que se va a pagar y muestra
//cuanto es el cambio. El programa solicita el valor del dinero con que se va a pagar
//hasta que este valor sea mayor al total de los productos, si es menor muestra un
//mensaje diciendo que falta dinero.

#include <iostream>

using namespace std;

int main (){
	
	int dia, n = 1, subtotalC = 0, festivo, valor_pago, descuento,IVA;
	int cambio, total;
	float productos, subtotalD = 0;
	
	cout<<"Ingrese el dia: "; cin>>dia;
	cout<<"Ingrese 1 para saber si es festivo o 0 para saber si no es festivo: ";cin>>festivo;
	
	
	for (int np = 1; np <= 5; np++){
		cout<<"digite el precio producto "<<n++<<": ";cin>>productos;
	}
	
	subtotalD = productos + (productos + productos ) + (productos + productos);
	subtotalC = subtotalD * 2800;
	cout<<"El subtotal en pesos Colombianos es: "<<subtotalC;
	
	IVA = subtotalC * 0.19; /// El iva es del 0.16
	
	//// El IVa se puede calcular y sumar afuera del if para realizar una sola operación
	/// No mostro el valor del iva
	if((dia % 5 == 0)&&(festivo == 0)){
		
		descuento = subtotalC * 0.07;
		total = subtotalC + IVA;
		total -= descuento;
		cout<<"\nEl total a pagar es: "<<total<<endl;
	}else {
		total = subtotalC + IVA;
		cout<<"\nEl total a pagar es: "<<total<<endl;
	}
	
	cout<<"\nIngrese el valor a pagar: ";cin>>valor_pago;
	
	do{    	
    	
		if(valor_pago >= total){
			
			cambio = valor_pago - total;
			cout<<"Gracias por la compra, le sobra : $"<<cambio;break;
		}
		
		else if(valor_pago < total){
		
    		total -= valor_pago; 
    	    cout<<"\nle falta dinero. Falta: $"<<total;
    	    cout<<"\nFalta dinero : $";cin>>valor_pago;
    	}
}while (total >= 0);

}
