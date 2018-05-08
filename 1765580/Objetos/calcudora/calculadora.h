#ifndef CALCULADORA_H
#define CALCULADORA_H
using namespace std;

class Calculadora {
	private:
		double numero1;
		double numero2;
		double resultado;	
	
	public:
		Calculadora(double numero1, double numero2, double resultado);
		~Calculadora();
		double sumar();
		double restar();
		double multiplicar();
		double dividir();
		double porcentaje();
		

};

#endif
