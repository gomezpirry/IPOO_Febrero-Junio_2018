//------------------------------------------
//------ Calificación 0.5
//
// *  implementación del ciclo for incorrectamente (estaba haciendo un while dentro de un for)
//------------------------------------------

#include <iostream>

using namespace std;



int main ()  

{
	
	
	
	int caja, X = 1,  comprasub = 0, festivo, costo,descuento,IVA;
	unsigned int total;
	float productos, sutd = 0;
	
	
	cout<<"_________DIJITE UN DIA: "; cin>>caja;
	cout<<"�QUIERES SABER SI ES FESTIVO? (PRECIONA 1) �QUIERES SABER SI NO LO ES?(PRECIONA 0)  ";cin>>festivo;
	
	
	for (int X1 = 1; X1 <= 5; X1++){
		cout<<"_______DIJITE EL PRECIO DE EL PRODUCTO....: "<<X++<<": ";cin>>productos;
	}
	
	sutd = productos + (productos + productos ) + (productos + productos);
	 comprasub = sutd* 2800;
	cout<<"SUBTOTAL COMPRA: "<< comprasub;
	
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
	if((caja % 5 == 0)&&(festivo == 0)){
		
		descuento = comprasub * 0.07;
		IVA =  comprasub * 0.16;
		total = comprasub + IVA;
		total -= descuento;
		cout<<"\nTOTAL A PAGAR: "<<total<<endl;


	}else {
		IVA =  comprasub * 0.16;
		total =  comprasub + IVA;
		cout<<"\nTOTAL A PAGAR: "<<total<<endl;
	}
	
	cout<<"\n______DIJITE LA CANTIDAD A PAGAR: ";cin>>costo;
	
	/// te falto mostrar en pantalla el cambio
	if (costo >= total){
		total = costo - total;
		cout<<"TENGA UN MUY BUEN DIA.";
		
	
	}else {
		/// Est ciclo esta mal implementado
		for(total ; total >= costo;){
		
		total = total - costo;
		cout<<"EL FALTANTE ES___"<<total;
		cout<<"\n______DIJITE LA CANTIDAD A PAGAR: ";cin>>costo;
		
	}
	
		
	
	
	
	
	
	
	}



}
		

	

