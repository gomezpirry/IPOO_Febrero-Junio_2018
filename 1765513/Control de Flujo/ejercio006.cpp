//------------------------------------------
//------ Calificación 0.68
//
//------------------------------------------


#include <iostream>

using namespace std;

int main (){

	int dia, n = 1, subtotalC = 0, festivo, valorpago, descuento,IVA;
	int cambio, total;
	float productos, subtotalD = 0;

	cout<<"Ingrese el dia: ";
	cin>>dia;
	cout<<"Ingrese 1 para saber si es festivo o 0 para saber si no es festivo: ";
	cin>>festivo;


	for (int np = 1; np <= 5; np++){
		cout<<"digite el precio producto "<<n++<<": ";cin>>productos;
	}

	subtotalD = productos + (productos + productos ) + (productos + productos);
	subtotalC = subtotalD * 2800;
	cout<<"El subtotal en pesos Colombianos es: "<<subtotalC;

	IVA = subtotalC * 0.16;
    
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

	cout<<"\nIngrese el valor a pagar: ";cin>>valorpago;

// OK
	do{

		if(valorpago >= total){

			cambio = valorpago - total;
			cout<<"Gracias por la compra, le sobra : $"<<cambio;break;
		}

		else if(valorpago < total){

    		total -= valorpago;
    	    cout<<"\nle falta dinero. Falta: $"<<total;
    	    cout<<"\nFalta dinero : $";cin>>valorpago;
    	}
}while (total >= 0);

}



