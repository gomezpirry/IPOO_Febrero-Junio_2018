#ifndef UNIVERSO_H
#define UNIVERSO_H
#include <string>

using namespace std;

class Universo
{
	private:
	         int numero;
	         string nombre;
	         
	public:
		Universo();
		~Universo();
		
		
		void    darNumero(int numero);
		int     obtenerNumero();
		void    darNombre(string nombre);
		string  obtenerNombre();
	
};

#endif
