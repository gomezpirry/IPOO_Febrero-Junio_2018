#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <windows.h>
#include <iostream>
#include <cmath>


/// Copio y pego http://programacionparacoccidio.blogspot.com.co/2011/07/calculadora-en-c-orientada-objetos.html
class Calculadora{
      private://Atributos
              int numero;
              double numero1;
              double numero2;
              double numero3;
              double resultado;
              void insertar();//para los demas
              void imprimir();//para mandar a llmar el resultado
              void Insertar();//para sqrt y para factorial
              void ingresar();//para chicharronera
      public://Metodos
              Calculadora();
              void suma();
              void resta();
              void multiplicacion();
              void division();
              void raizCuadrada();
              void chicharronera();
              void factorial();
              void Menu();
              void gotoxy(int x, int y);
              void primos();
              void tabla();
              void IMC();
              void Exit(int x, int y);
};
#endif
