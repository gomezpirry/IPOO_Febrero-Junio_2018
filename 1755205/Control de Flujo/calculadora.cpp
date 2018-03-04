//------------------------------------------
//------ Calificación 0.4
//
// * No uso el default del switch
// * Falto operación de salir (ciclo infinito)
//------------------------------------------


/*
 * calculadora.cpp
 *
 *  Created on: 25/02/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>

using namespace std;

int main()

{
	char operacion;

	do{
	cout<<"-----MEN�-----\n";
	cout<<"ingrese una opcion a, b, c, d, o e segun la operacion que desea realizar\n";

	/// Te falto una operación para salir
	cout<<"a) sumar\n";
	cout<<"b) restar\n";
	cout<<"c) multiplicar\n";
	cout<<"d) dividir\n";
	cout<<"e) calcular porcentaje\n";
	cin>>operacion;
	if(operacion == 'a' || operacion =='b' || operacion =='c'|| operacion =='d' || operacion =='e') // El default del switch te ahorra este condicional
	{
		switch(operacion){

				case 'a':
					cout<<"digite los numeros a sumar\n";

					int a;
					int b;
					cout<<"numero a\n";
					cin>>a;
					cout<<"numero b\n";
					cin>>b;
                    a += b;
                    cout<<a<<"\n";
      break;

				case 'b':
									cout<<"digite los numeros a restar\n";

									int s;
									int t;
									cout<<"numero a\n";
									cin>>s;
									cout<<"numero b\n";
									cin>>t;
				                    s -= t;
				                    cout<<s<<"\n";
				      break;

				case 'c':
									cout<<"digite los numeros a multiplicar\n";

									int c;
									int v;
									cout<<"numero a\n";
									cin>>c;
									cout<<"numero b\n";
									cin>>v;
				                    c *= v;
				                    cout<<c<<"\n";
				      break;

				case 'd':
									cout<<"digite los numeros a dividir\n";

									int p;
									int o;
									cout<<"numero a\n";
									cin>>p;
									cout<<"numero b\n";
									cin>>o;
				                    p /= o;
				                    cout<<p<<"\n";
				      break;

				case 'e':
									cout<<"digite los numeros a sacar porcentaje\n";

									float i;
									float x;
									cout<<"porcentaje a sacar\n";
								    cin>>i;
								    cout<<"dato al cual se le sacara el porcentaje\n";
									cin>>x;
								    i /= x;
								    i *=100;
								    cout<<i<<"%\n";
								      break;

	}
	}
	else
	{
		cout<<"comando no disponible\n";
	}
	}while(operacion != 0); // Genera un ciclo infinito cuando porque salir es 0 y letra es char (char = 0 es null)



}


