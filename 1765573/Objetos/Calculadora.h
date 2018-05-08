#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <windows.h>
#include <iostream>
#include <cmath>

class Calculadora{
      private:
              int numero;
              double numero1;
              double numero2;
              double numero3;
              double resultado;
              void insertar();
              void imprimir();
              
      public:
              Calculadora();
              void suma();
              void resta();
              void multiplicacion();
              void division();
              void Menu();
              
};
#endif
