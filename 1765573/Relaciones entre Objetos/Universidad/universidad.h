#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <facultad> 
# include <string>

using namespace std;

class universidad
{
	private: 
	string nombre;
	string direccion;
	bool   publica;
	
	public:
		universidad();
		~universidad();
		
		void      darNombre(string nombre);
		string    obtenerNombre();
		void      darDireccion(string direccion);
		string    obtenerDireccion();
		bool   	esPublica();
	    void 	sePublica(bool publica);
			
};

#endif
