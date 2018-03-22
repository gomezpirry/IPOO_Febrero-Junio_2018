//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>


	enum golpes{
		mordedura = 50,
		punetazo = 100,
		espadazo = 150,
		rayo = 200,
		explosion = 300,
	};
	// OK
	int danorecibido(int energiainicial, int cantidadgolpes,
	                  golpes secuenciagolpes[]){  
	                  
	         for(int golpes = 0; golpes < cantidadgolpes; golpes++) {
	         	energiainicial -= secuenciagolpes[golpes];
			 }         
			return energiainicial;
			  }
			  
	int main(){
		int energia = 1000;
		golpes secuenciagolpes[10] = {mordedura, explosion, espadazo,
		                              mordedura, explosion, punetazo,
									  explosion, rayo,rayo};
	
	
	int golpes = sizeof(secuenciagolpes)/sizeof(secuenciagolpes);
	
	
	int	energiarestante = danorecibido(energia, golpes, secuenciagolpes);

	std:: cout << "el traje le queda" << energiarestante << "de energia \n " ;							  
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

