//-------------------------------------------------
//   Calificación: 0.0
//
//--------------------------------------------------

/*
 * ejer4.cpp
 *
 *  Created on: 13/03/2018
 *      Author: MARINO RODRIGUEZ
 */

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {



	cout << "\n------" << " Punto 3 " << "---------\n\n";

	std::string nombres[6] 	= {"Daniela", "Luisa", "Sebas", "Aleja", "Jairo", "Martha"};
	int			codigos[6] 	= {1603457, 1698754, 1632589, 1590765, 1712345, 1856214};
	float		quiz1[6]	= {3.0f, 2.9f, 4.2f, 4.1f, 3.2f, 3.5f};
	float		quiz2[6]	= {2.7f, 5.0f, 2.8f, 3.8f, 2.4f, 5.0f};
	float		parcial[6]  = {3.1f, 4.5f, 3.7f, 4.3f, 4.4f, 3.5f};
	float		proyecto[6] = {4.1f, 2.3f, 4.0f, 3.0f, 3.6f, 4.1f};
	float		finales[6]	= {};

	int sizeNombres 	= sizeof(nombres)/sizeof(nombres[0]);
	int sizeCodigos 	= sizeof(codigos)/sizeof(codigos[0]);
	int sizeQuiz1		= sizeof(quiz1)/sizeof(quiz1[0]);
	int sizeQuiz2		= sizeof(quiz2)/sizeof(quiz2[0]);
	int sizeParcial		= sizeof(parcial)/sizeof(parcial[0]);
	int sizeProyecto	= sizeof(proyecto)/sizeof(proyecto[0]);

	if(sizeNombres != sizeCodigos || sizeNombres != sizeQuiz1 || sizeNombres != sizeQuiz2
			|| sizeNombres != sizeParcial || sizeNombres != sizeProyecto){
		cout << "Los tamanos no coinciden\n" ;
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < sizeNombres; i++){
		finales[i] = (((quiz1[i] + quiz2[i])/2) * 0.25) + (parcial[i] * 0.35) + (proyecto[i] * 0.4);
	}

	cout << "nombre\t\t" << "codigo\t\t" << "quiz1\t" << "quiz2\t" << "parcial\t" << "proyecto\t" << "final\t\n";
	for(int i = 0; i < sizeNombres; i++){
		cout << nombres[i] <<"\t\t"<< codigos[i] <<"\t\t"<< quiz1[i] <<"\t"<< quiz2[i] <<"\t"<< parcial[i] <<"\t"<< proyecto[i] <<"\t\t"<< finales[i] << "\n";
	}
}

