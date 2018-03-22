//-------------------------------------------------
//   Calificación: 0.0
//
//--------------------------------------------------

#include <iostream>
#include <typeinfo>

using namespace std;

/// No uso estructuras
int main() {


	string nombres[6] 	= {"Pedro \t", "Jose\t", "Yeny\t", "Camilo\t", "Yurani\t", "Sara\t"};
	int			codigos[6] 	= {1603457, 1698754, 1632589, 1590765, 1712345, 1856214};
	float		quiz1[6]	= {2.1, 5.0, 2.2, 2.3, 4.2, 3.6};
	float		quiz2[6]	= {1.7, 2.2, 5.0, 2.8, 4.4, 3.5};
	float		parcial[6]  = {3.6,3.3, 3.7, 3.3, 2.4, 3.5};
	float		proyecto[6] = {5.1, 2.3, 3.0, 5.0, 2.6, 4.1};
	float		finales[6]	= {};

	int sizeNombres 	= sizeof(nombres)/sizeof(nombres[0]);
	int sizeCodigos 	= sizeof(codigos)/sizeof(codigos[0]);
	int sizeQuiz1		= sizeof(quiz1)/sizeof(quiz1[0]);
	int sizeQuiz2		= sizeof(quiz2)/sizeof(quiz2[0]);
	int sizeParcial		= sizeof(parcial)/sizeof(parcial[0]);
	int sizeProyecto	= sizeof(proyecto)/sizeof(proyecto[0]);
	

	if(sizeNombres != sizeCodigos || sizeNombres != sizeQuiz1 || sizeNombres != sizeQuiz2
			|| sizeNombres != sizeParcial || sizeNombres != sizeProyecto ){
		cout << "No Coinciden En Los Tamaños \n" ;
		
	}

	for(int i = 0; i < sizeNombres; i++){
		finales[i] = (((quiz1[i] + quiz2[i])/2) * 0.25) + (parcial[i] * 0.35) + (proyecto[i] * 0.4);
	}

	cout << "Nombres \t" << "Codigo \t" << "Quiz1 \t" << "Quiz2 \t"  
	<< "Parcial \t" << "Proyecto \t" << "Final\t\n";
	for(int i = 0; i < sizeNombres; i++){
		cout << nombres[i] <<"\t"<< codigos[i]<<"\t"<< quiz1[i] <<"\t" << quiz2[i] <<"\t"<< parcial[i] <<"\t"
		<< proyecto[i] <<"\t"<< finales[i] << "\n";
	}}




