#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__
#define string.h

class Estuiante{
	private:
		int codigo;
		string plan;
		int edad;
	public:
		Estudiante()
		void darCodigo(int codigo);
		int obtenerCodigo();
		void darPlan(string plan);
		string obtenerPlan();
		void darEdad(int edad)
		int obtenerEdad();
};

#endif
