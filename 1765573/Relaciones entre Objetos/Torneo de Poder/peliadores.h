#ifndef PELIADORES_H
#define PELIADORES_H
#include <poderes.h>
#include <string>

using namespace std;


class peliadores
{
	private:
		float nivelVida;
		float nivelKi;
		poderes tipo;
		
		
	public:
		peliadores();
		~peliadores();
		
		void     darNivelVida(float nivelVida);
		float    obtenerNivelVida();
		void     darNivelKi(float nivelKi);
		float    obtenerNivelKi();
		void     darPoderes(poder tipo);
		poderes  obtenerPoderes();
	
};

#endif
