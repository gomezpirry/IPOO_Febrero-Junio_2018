#ifndef __Persona_H__
#define __Persona_H__
#define string.h

class Persona{
	private:
		string nombre;
		string apellido;
		int identificacion;
	public:
		Persona()
		void darNombre(string nombre);
		string obtenerNombre();
		void darApellido(string apellido);
		string obtenerApellido();
		void darCedula(int cedula)
};

#endif
