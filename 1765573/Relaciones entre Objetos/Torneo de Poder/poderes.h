#ifndef PODERES_H
#define PODERES_H
#include <dioses.h>
#include <string>

using namespace std;

class poderes
{
	private: 
	        string  elemento;
	        float   consumoKi;
	        float   menosPoder;
	        
	
	public:
		poderes();
		~poderes();
		
		void    darElemento(string elemento);
		string  obtenerElemento();
		void    darConsumoKi(float consumoKi);
		float   obtenerConsumoKi();
		void    darMenosPoder(float menosPoder);
		float   obtenerMenosPoder();
		
	
};

#endif
