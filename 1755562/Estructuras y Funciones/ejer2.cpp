//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

/*
 * ejer2.cpp
 *
 *  Created on: 13/03/2018
 *      Author: MARINO RODRIGUEZ
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
    int golpes=13;
	Golpes secuenciaGolpes[13]={MORDEDURA,MORDEDURA,ESPADAZO,RAYO,EXPLOSION,PUNETAZO,PUNETAZO,
			                    EXPLOSION,RAYO,EXPLOSION,ESPADAZO,RAYO,MORDEDURA};




    int energiaRestante=danoRecibido(energia,golpes,secuenciaGolpes);

    cout<<"A SAMUS LE QUEDAN: "<<energiaRestante<<" PUNTOS DE VIDA.";
}



