//============================================================================
// Name        : Ejecicios.cpp
// Author      : Augusto Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {


///----------------------------------------------------------------
/// ------------------------- Punto 3 -----------------------------
///----------------------------------------------------------------
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

///----------------------------------------------------------------
/// ------------------------- Punto 4 -----------------------------
///----------------------------------------------------------------

	cout << "\n------" << " Punto 4 " << "---------\n\n";

	char palabras[]   =  "Debo practicar para poder aprender a programar";
	char buscar			=  'z';

	if(typeid(palabras[0]).name() != typeid(buscar).name()){
		cout << "Los tipos no coinciden";
		exit(EXIT_FAILURE);
	}

	int size = sizeof(palabras)/sizeof(palabras[0]);

	int contador = 0;
	for(int i = 0; i < size; i++){
		if(palabras[i] == buscar)
			contador++;
	}

	cout << buscar << " aparece " << contador << " veces\n\n";

///----------------------------------------------------------------
/// ------------------------- Punto 5 -----------------------------
///----------------------------------------------------------------

	cout << "\n------" << " Punto 5 " << "---------\n\n";

	int matriz[6][6] = {{5, 8, 3, 2, 4, 1},
						{1, 2, 3, 4, 5, 6},
						{6, 5, 4, 3, 2, 1},
						{0, 9, 2, 8, 4, 7},
						{2, 5, 8, 1, 4, 7},
						{9, 6, 3, 7, 4, 1}};

	int traspuesta[6][6] = {};

	int sizeMatriz	= sizeof(matriz)/sizeof(matriz[0][0]);
	int columnas 	= sizeof(matriz[0])/sizeof(matriz[0][0]);
	int filas 		= sizeMatriz / columnas;

	for(int fila = 0; fila < filas; fila++)
		for(int columna = 0; columna < columnas; columna++){
			traspuesta[columna][fila] = matriz[fila][columna];
		}

	for(int fila = 0; fila < filas; fila++){
		for(int columna = 0; columna < columnas; columna++){
			cout << traspuesta[fila][columna] << " ";
		}
		cout << "\n";
	}

///----------------------------------------------------------------
/// ------------------------- Punto 6 -----------------------------
///----------------------------------------------------------------

	cout << "\n------" << " Punto 6 " << "---------\n\n";


	int A[3][4] =  {{5, 3, -9, 7},
					{-2, 7, 6, 10},
					{3, 9, 5, 2}};

	int B[3][4] = {{8, 4, 6, 1},
				   {1, 9, -2, 6},
				   {3, 10, 8, 3}};

	int sumaAB[3][4]  = {};
	int restaAB[3][4] = {};

	int sizeA		= sizeof(A)/sizeof(A[0][0]);
	int sizeB		= sizeof(B)/sizeof(B[0][0]);

	int columnasA 	= sizeof(A[0])/sizeof(A[0][0]);
	int filasA 		= sizeA / columnasA;
	int columnasB 	= sizeof(B[0])/sizeof(B[0][0]);
	int filasB 		= sizeB / columnasB;

	if(columnasA != columnasB || filasA != filasB){
		cout << "Las dimensiones no coinciden\n\n";
		exit(EXIT_FAILURE);
	}

	for(int fila = 0; fila < filasA; fila++)
		for(int columna = 0; columna < columnasA; columna++){
			sumaAB[fila][columna] = A[fila][columna] + B[fila][columna];
			restaAB[fila][columna] = A[fila][columna] - B[fila][columna];
		}

	cout << "\nSuma A + B\n\n";
	for(int fila = 0; fila < filasA; fila++){
		for(int columna = 0; columna < columnasA; columna++){
			cout << sumaAB[fila][columna] << "\t";
		}
		cout << "\n";
	}

	cout << "\nResta A - B\n\n";
	for(int fila = 0; fila < filasA; fila++){
		for(int columna = 0; columna < columnasA; columna++){
			cout << restaAB[fila][columna] << "\t";
		}
		cout << "\n";
	}

}
