//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>


	enum golpes{
		M=50,
		P=100,
		E=150,
		R=200,
		EX=300,
	};

int danoRecibido(int energia_inicial, int cantidad_de_golpes, golpes secuenciaGolpes[]){
	
	for(int golpes = 0; golpes < cantidad_de_golpes; golpes++){
		energia_inicial -= secuenciaGolpes[golpes];
	}
	
	return energia_inicial;
}

int main(){
	int energia = 1000;
	golpes secuenciaGolpes[10] = {M,P,E,R,R,EX,E,M,R,P};
	
	
 int golpes= sizeof (secuenciaGolpes)/sizeof(secuenciaGolpes);
 int energiaRestante = danoRecibido(energia,golpes,secuenciaGolpes);
 
 std::cout<<"La Energia Del Traje Es:\t"<<energiaRestante<< "\tde energia \t" ; 
 
 
}




