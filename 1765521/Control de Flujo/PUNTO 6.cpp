//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int dia, numero = 1, subtotalPC = 0, festivo, valor_pago, descuento,IVA;
	int cambio, total;
	float productos, subtotalDolares = 0;
	
	cout<<"Ingrese el dia: "; cin>>dia;
	cout<<"Ingrese 1 para saber si es festivo o 0 para saber si no es festivo: ";cin>>festivo;
	
	
	for (int np = 1; np <= 5; np++){
		cout<<"digite el precio producto "<<numero++<<": ";cin>>productos;
	}
	
	subtotalDolares = productos + (productos + productos ) + (productos + productos);
	subtotalPC = subtotalDolares * 2800;
	cout<<"El subtotal en pesos Colombianos es: "<<subtotalPC;
	
	IVA = subtotalPC * 0.16;
	//// El IVa se puede calculary sumar afuera del if para realizar una sola operación
	if((dia % 5 == 0)&&(festivo == 0)){
		
		descuento = subtotalPC * 0.07;
		total = subtotalPC + IVA;
		total -= descuento;
		cout<<"\nEl total a pagar es: "<<total<<endl;
	}else {
		total = subtotalPC + IVA;
		cout<<"\nEl total a pagar es: "<<total<<endl;
	}
	
	cout<<"\nIngrese el valor a pagar: ";cin>>valor_pago;
	
	// OK
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

		

	

