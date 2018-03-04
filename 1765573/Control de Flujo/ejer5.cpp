//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/*
 5. Realice un programa que calcule el rango de un jugador basado en su puntaje. El juego
acepta puntajes entre 0 y 10000 puntos y maneja los siguientes rangos:
C: 0 - 4000
B: 4001 - 7000
A: 7001 - 9000
S: 9001 - 9999
SA: 10000 */

#include<iostream>
#include<string>

using namespace std;

int main(){
	int puntaje;

/// OK
	cout << "ingrese el puntaje (0 - 10000)";
	cin>>puntaje;

	if (puntaje > 10000 || puntaje < 0){
	   cout << "el rango esta fuera del programa";
	   system ("pause");
	   exit(1);
	}

	if(puntaje >= 10000)
		cout<< "SA";

	else if (puntaje >= 9001)
		cout<< "S";

	else if (puntaje >= 7001)
		cout<< "A";

	else if (puntaje >= 4001)
		cout<< "B";

	else
		cout<< "C";

    system("pause");
	return 0;
}




