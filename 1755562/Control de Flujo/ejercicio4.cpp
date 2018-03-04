//------------------------------------------
//------ Calificación 0.4
//
// * No uso el default del switch
// * Falto operación de salir (ciclo infinito)
//------------------------------------------


/*
 * ejercicio4.cpp
 *
 *  Created on: 25/02/2018
 *      Author: MARINO RODRIGUEZ
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	char opcion;

	do{
		/// Te falto una operación para salir
		cout<<"MENU\n";
		cout<<"a-Suma\n";
		cout<<"b-Resta\n";
		cout<<"c-Multiplicacion\n";
		cout<<"d-Division\n";
		cout<<"e-Promedio\n";
		cout<<"Ingrese la opcion a desarrollar\n";
		cin>>opcion;

		if(opcion == 'a' || opcion =='b' || opcion =='c'|| opcion =='d' || opcion =='e') // El default del switch te ahorra este condicional
			{
				switch(opcion){

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

											cout<<"numero a\n";
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
										    cout<<i<<"\n";

										    break;

			}
			}
			else
			{
				cout<<"Opcion no valida\n";
			}
			}while(opcion != 0); // Genera un ciclo infinito cuando porque salir es 0 y opcion es char (char = 0 es null)



}



