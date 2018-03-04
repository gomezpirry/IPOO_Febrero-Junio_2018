//------------------------------------------
//------ Calificación 0.68
//
// * No mostro el valor del iva
//------------------------------------------

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

		

	

