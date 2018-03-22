//------------------------------------------
//------ Calificación 1.25
// 
//-----------------------------------------

/*
 * EJ2.cpp
 *
 *  Created on: 13/03/2018
 *      Author: sefer
 */
#include<iostream>
#include<string>

using namespace std;



enum   Golpes{
		MORDEDURA = 50,
	    PUNETAZO = 100,
	    ESPADAZO = 150,
	    RAYO = 200,
	    EXPLOSION = 300};

int danoRecibido(int energiaInicial, int cantidadGolpes, Golpes secuenciaGolpes[])
{
	for(int golpe=0; golpe<cantidadGolpes;golpe++)
	{
		energiaInicial-= secuenciaGolpes[golpe];
	}

	return energiaInicial;
}


int main()
{
	int energia=3000;
    int golpes=10;
	Golpes secuenciaGolpes[10]={MORDEDURA,EXPLOSION,ESPADAZO,MORDEDURA,EXPLOSION,PUNETAZO,PUNETAZO,
			                    EXPLOSION,RAYO,RAYO};




    int energiaRestante=danoRecibido(energia,golpes,secuenciaGolpes);

    cout<<"A SAMUS LE QUEDAN: "<<energiaRestante<<" PUNTOS DE VIDA.";
}








