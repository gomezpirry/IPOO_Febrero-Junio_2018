//------------------------------------------
//------ Calificación 0.5
//
// * Redundancia de codigo en los condicionales
// * No implemento el ciclo para seguir pidiendo el valor de 
//    pago si era menor
//------------------------------------------

/*
 * cajaregistradora.cpp
 *
 *  Created on: 25/02/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/// OK
	cout<<"HOLA, ESTA ES LA CAJA REGISTRADORA, POR FAVOR DIGITE EL DIA DEL CALENDARIO PARA COMENZAR\n";
	int dia;
	cin>>dia;
	cout<<"hoy es un dia festivo?, presione 1 si lo es y 0 en caso de no serlo\n";
	bool fest;
	cin>>fest;

	/// OK
	cout<<"ingrese por favor el valor de los productos\n";
	cout<<"recuerde que el valor de estos esta dado en dolares\n";
	cout<<"valor del producto 1\n";
	float prod1;
	cin>>prod1;
	cout<<"valor del producto 2\n";
		float prod2;
		cin>>prod2;
		cout<<"valor del producto 3\n";
			float prod3;
			cin>>prod3;
			cout<<"valor del producto 4\n";
				float prod4;
				cin>>prod4;
				cout<<"valor del producto 5\n";
					float prod5;
					cin>>prod5;

		float productos= prod1+prod2+prod3+prod4+prod5; // OK
		float total= productos * 3000;
		cout<<"precio apagar sin iva:$"<<total<<"\n"; // OK
		float coniva= total * 0.16;          
		float prec= coniva + total;                 /// Procura usar identificar de las variables que signifiquen algo
		cout<<"el valor del iva es 16%\n";  
		cout<<"iva:$"<<coniva<<"\n";   
		cout<<"total:$"<<prec<<"\n";

		// Aunque los condicionales estan bien hay mucha redundancia de código (código repretido que puede reutilizarse)
		// Recomendación

		/* Recalculando el precio con descuento te ahoras lineas de código
		if(dia%5==0 && fest==0)
		{
			cout<<"tienes derecho a un descuento del 7%\n";
			float totales = prec * 0.07;
			prec += prec - totales;					/// si no se cumple la condicion no se aplica el descuento				
			cout<<"total:$"<<prec<<"\n";
		}

		cout<<"con cuanto dinero va a pagar?\n";
		float dinero;
		cin>>dinero;
		if(dinero >= prec)
		{
			int resta1 = dinero - prec;
			cout<<"su cambio es:$"<<resta1<<"\n";
			cout<<"gracias por su compra\n";

		}
		else
		{
			cout<<"dinero insuficiente, por favor ingrese mas\n";
		}
		*/
		if(dia%5==0 && fest==0)
		{
			cout<<"tienes derecho a un descuento del 7%\n";
			float totales = coniva * 0.07;    /// El calculo del descuento se hace sobre todo el valor, aqui lo haces solo sobre el iva
											 /// totales = prec * 0.07;
			float result = prec - totales;
			cout<<"total:$"<<result<<"\n";


			////  Te flato implementar el ciclo que solicitara el dinero cada vez que se ingresa un valor de pago menor
			/// Aca solo comprueba una vez
			cout<<"con cuanto dinero va a pagar?\n";
					float dinero;
					cin>>dinero;
					if(dinero >= result)
					{
						int resta1 = dinero - result;
						cout<<"su cambio es:$"<<resta1<<"\n";
						cout<<"gracias por su compra\n";

					}
					else
					{
						cout<<"dinero insuficiente, por favor ingrese mas\n";
					}
		}
		else
		{
		cout<<"con cuanto dinero va a pagar?\n";
		float diner;
		cin>>diner;
		if(diner >= prec)
		{
			int resta = diner - prec;
			cout<<"su cambio es:$"<<resta<<"\n";
			cout<<"gracias por su compra\n";

		}
		else
		{
			cout<<"dinero insuficiente, por favor ingrese mas\n";
		}
		}
}



