//------------------------------------------
//------ Calificación 0.3 
//
// * No uso el switch 
//------------------------------------------

/*
 * ejercicio3.cpp
 *
 *  Created on: 24/02/2018
 *      Author: MARINO RODRIGUEZ
 */
#include <iostream>
#include <string>

using namespace std;

int main(){

	int valor;
	cout<<"ingrese un valor entre 1 y 12";
	cin>> valor;

/// Es válido usar if pero aca debes usar el switch
	/*
	switch(numero)
	case 1:
		cout<<"january";
	break;
	case 2:
		cout<<"february";
	break;
	case 3:
		cout<<"march";
	break;
	case 4:
		cout<<"april";
	break;
	case 5:
		cout<<"may";
	break;
	case 6:
		cout<<"june";
	break;
	case 7:
		cout<<"july";
	break;
	case 8:
		cout<<"august";
	break;
	case 9:
		cout<<"september";
	break;
	case 10:
		cout<<"october";
	break;
	case 11:
		cout<<"november";
	break;
    case 12:
		cout<<"december";
	break;
	default:
		cout<<"el numero no corresponde a ningun mes";
	break;
	*/
	if(valor==1)
		cout<<"Enero";
	else
		if(valor==2)
			cout<<"Febrero";
		else
			if(valor==3)
					cout<<"Marzo";
				else
					if(valor==4)
						cout<<"Abril";
					else
						if(valor==5)
								cout<<"Mayo";
							else
								if(valor==6)
									cout<<"Junio";
								else
									if(valor==7)
											cout<<"Julio";
										else
											if(valor==8)
												cout<<"Agosto";
											else
												if(valor==9)
														cout<<"Septiembre";
													else
														if(valor==10)
															cout<<"Octubre";
														else
															if(valor==11)
																	cout<<"Noviembre";
																else
																	if(valor==12)
																		cout<<"Diciembre";
																	else
																		if(valor>12)
																			cout<<"Numero no valido";
																		else
																			if(valor<1)
																				cout<<"Numero no valido";


}



