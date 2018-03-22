//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

/*Samus Aran cuenta con el power suit, el cual tiene un analizador de da~no basado en
los golpes que recibe. El power suit cuenta con un programa que recibe un arreglo de
enumeraciones, donde cada enumeracion representa un golpe recibido. Cada golpe tiene
un nivel de da~no y le resta puntos de energia como se indica a continuacion:
MORDEDURA = 50
PU~NETAZO = 100
ESPADAZO = 150
RAYO = 200
EXPLOSION = 300
Dena una funcion que reciba el nivel de energia inicial, la cantidad de golpes recibidos
y un arreglo de enumeraciones con las secuencia de golpes que recibio el power suit, y
retorne el nivel de energa restante despues de recibir los golpes*/


#include <iostream>

using namespace std;

enum golpes {
	Mor = 50,
	Pun = 100,
	Esp = 150,
	Ray = 200,
	Exp = 300,
};

 int danoRecibido(int energiaIni, int cantidadGol, golpes secuenciaGolpes[]){
 	
 	for (int golpe = 0; golpe < cantidadGol; golpe++){
 		energiaIni -= secuenciaGolpes[golpe];
 		
	 }
	 
	 return energiaIni;
 }
	
	int main (){
		
	int energia = 2000;
	golpes secuenciaGolpes[10] = {Mor, Exp, Esp,
	                           Mor, Exp, Pun,
							   Exp, Ray, Ray};
							   
int golpes = sizeof(secuenciaGolpes)/sizeof (secuenciaGolpes[0]);

int energiaRestante = danoRecibido( energia, golpes, secuenciaGolpes);						   
							   
	cout <<" al traje le queda "<< energiaRestante << " de energia ";
};
