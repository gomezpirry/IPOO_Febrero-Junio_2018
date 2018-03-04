//------------------------------------------
//------ Calificación 0.5
//
// *  implementación del ciclo for incorrectamente (estaba haciendo un while dentro de un for)
// *  sentencias de escape incorrectas en definición de cadena de caracteres
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int dia, n = 1, subtotalC = 0, festivo, valor_pago,descuento,IVA;
	unsigned int total;
	float productos, subtotalD = 0;
	
	
	cout<<"Ingrese el dia: "; cin>>dia;
	cout<<"Ingrese 1 para saber si es dia festivo o 0 para saber si no es festivo: ";cin>> festivo;
	
	
	for (int np = 1; np <= 5; np++){
		cout<<"digite el precio del producto "<<n++<<": ";cin>>productos; /// Puede usar el np en lugar del n (es lo mismo)
	}
	
	subtotalD = productos + (productos + productos ) + (productos + productos);
	subtotalC = subtotalD * 2800;
	cout<<"El subtotal en pesos Colombianos es: "<<subtotalC;
	
	/// Se estan repitiendo la operacion de calcular iva en el if ( en el if solo se debe calcular el descuento)
	/* Asi haces lo mismo
	IVA = subtotalC * 0.16;
	total = subtotalC + IVA;
	if((dia % 5 == 0)&&( festivo == 0)){
		descuento = subtotalC * 0.07;
		total -= descuento;
	}
	cout<<"\El total a pagar es: "<<total<<endl;
	*/
// Falta mostrar el iva
	if((dia % 5 == 0)&&( festivo == 0)){
		
		descuento = subtotalC * 0.07;
		IVA = subtotalC * 0.16;
		total = subtotalC + IVA;
		total -= descuento;
		cout<<"\El total a pagar es: "<<total<<endl; // El backslash te genera error porque no hay sentencia de escape
	}else {
		IVA = subtotalC * 0.16;
		total = subtotalC + IVA;
		cout<<"\El total a pagar es: "<<total<<endl;  // El backslash te genera error porque no hay sentencia de escape
	}
	
	cout<<"\Ingrese la cantidad de dinero a pagar: ";cin>>valor_pago;
	
	/// te falto mostrar en pantalla el cambio
	if (valor_pago >= total){
		total = valor_pago - total;
		cout<<"Gracias por su compra.";
		
	}else {

		/// Est ciclo esta mal implementado
		for(total ; total >= valor_pago;){
		
		total = total - valor_pago; 
		cout<<" falta  dinero. Le falta: $"<<total;
		cout<<"\Ingrese la cantidad de dinero a pagar: ";cin>>valor_pago;
		
	}
	
		
	}
}
		

	

