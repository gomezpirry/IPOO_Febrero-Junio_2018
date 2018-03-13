//============================================================================
// Name        : Partidos.cpp
// Author      : Augusto Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <utility>
using namespace std;

struct Equipo {
	string 	nombre;
	int		marcados;
	int 	recibidos;
	int		diferencia;
	int 	puntos;
};

struct Resultado {
	string 	equipo1;
	int		golesEquipo1;
	string	equipo2;
	int		golesEquipo2;
};

void cambio(Equipo &equipo1, Equipo &equipo2){
	Equipo temp 	= equipo1;
	equipo1 		= equipo2;
	equipo2 		= temp;

}

void mostrarEquipos(Equipo equipos[4]){
	cout << "Equipo\t\t" << "Puntos\t" << "Marcados\t" << "Recibidos\t" << "Diferencia\n\n";
	for(int i = 0; i < 4; i++){
		cout << equipos[i].nombre << "\t" << equipos[i].puntos << "\t" << equipos[i].marcados
				<< "\t\t" << equipos[i].recibidos << "\t\t" << equipos[i].diferencia   << "\n";
	}
}

void ordenarPosiciones(Equipo equipos[4]){

	bool cambios;

	do {
		cambios = false;
		for(int i = 1; i < 4; i++){
			if(equipos[i].puntos > equipos[i-1].puntos){
				cambio(equipos[i], equipos[i-1]);
				cambios         = true;
			}
			else if(equipos[i].puntos == equipos[i-1].puntos && equipos[i].diferencia > equipos[i-1].diferencia){
				cambio(equipos[i], equipos[i-1]);
				cambios         = true;
			}
			else if(equipos[i].puntos == equipos[i-1].puntos && equipos[i].marcados > equipos[i-1].marcados){
				cambio(equipos[i], equipos[i-1]);
				cambios         = true;
			}
		}
	}
	while(cambios);

}

int calcularPuntos(int favor, int contra){

	int puntos = 0;
	if(favor > contra)
		return 3;
	if(favor == contra)
		return 1;

	return puntos;
}

void calcularEquipos(Resultado resultados[12], string nombreEquipos[4], Equipo equipos[4]){


	for(int equipo = 0; equipo < 4; equipo++){
		Equipo nuevoEquipo = {};
		int marcados, recibidos, puntos = 0;
		nuevoEquipo.nombre = nombreEquipos[equipo];
		for(int resultado = 0; resultado < 12; resultado++){
			if(resultados[resultado].equipo1 == nombreEquipos[equipo]){
				marcados 	+= resultados[resultado].golesEquipo1;
				recibidos 	+= resultados[resultado].golesEquipo2;
				puntos 		+= calcularPuntos(resultados[resultado].golesEquipo1, resultados[resultado].golesEquipo2);
			}
			if(resultados[resultado].equipo2 == nombreEquipos[equipo]){
				marcados 	+= resultados[resultado].golesEquipo2;
				recibidos 	+= resultados[resultado].golesEquipo1;
				puntos 		+= calcularPuntos(resultados[resultado].golesEquipo2, resultados[resultado].golesEquipo1);
			}
		}

		nuevoEquipo.marcados 	= marcados;
		nuevoEquipo.recibidos 	= recibidos;
		nuevoEquipo.puntos 		= puntos;
		nuevoEquipo.diferencia 	= marcados - recibidos;

		equipos[equipo] = nuevoEquipo;
	}
}


int main() {

	/// Tabla de Resultados construida usando pair
	Resultado resultados[12] = {{"Olympiacos", 	 2, "Sporting CP",	3},
								{"Barcelona", 	 3, "Juventus", 	0},
								{"Juventus", 	 2, "Olympiacos", 	0},
								{"Sporting CP",  0, "Barcelona", 	1},
								{"Barcelona", 	 3, "Olympiacos", 	1},
								{"Juventus", 	 2, "Sporting CP", 	1},
								{"Olympiacos",   0, "Barcelona", 	0},
								{"Sporting CP",  1, "Juventus", 	1},
								{"Sporting CP",  3, "Olympiacos", 	1},
								{"Juventus", 	 0, "Barcelona", 	0},
								{"Olympiacos", 	 0, "Juventus", 	2},
								{"Barcelona", 	 2, "Sporting CP", 	0}};

	string nombreEquipos[4] = {"Olympiacos", "Sporting CP", "Barcelona", "Juventus"};
	Equipo equipos[4] = {};

	calcularEquipos(resultados, nombreEquipos, equipos);
	ordenarPosiciones(equipos);
	mostrarEquipos(equipos);

}
