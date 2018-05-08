#include "calculadora.h"

Calculadora::Calculadora()
{
    numero1 = 0.0;
    numero2 = 0.0;
    resultado = 0.0;
}


void Calculadora::suma()
{
     insertar();
     resultado = numero1 + numero2;
     imprimir();
}

void Calculadora::resta()
{
     insertar();
     resultado = numero1 - numero2;
     imprimir();
}

void Calculadora::multiplicacion()
{
     insertar();
     resultado = numero1 * numero2;
     imprimir();
}

void Calculadora::division()
{
     insertar();
     if(numero2 != 0){
         resultado = numero1 / numero2;
         imprimir();
     }
     else
         std::cerr<<"Imposible dividir entre 'Cero'";

}



void Calculadora::insertar()
{
    std::cout<<"Ingresa el primer valor: ";
    std::cin>>numero1;
    std::cout<<"Ingresa el segundo valor: ";
    std::cin>>numero2;
}

void Calculadora::Insertar()
{
    std::cout<<"Ingresa el valor: ";
    std::cin>>numero1;
}

void Calculadora::ingresar()
{
    std::cout<<"Ingresa el primer valor: ";
    std::cin>>numero1;
    std::cout<<"Ingresa el segundo valor: ";
    std::cin>>numero2;
    std::cout<<"Ingresa el tercer valor: ";
    std::cin>>numero3;
}

void Calculadora::imprimir()
{
    std::cout<<"\nEl resultado es: "<<resultado;
}




void Calculadora::Menu()
{


    std::cout<<"\n 0: SUMAR";
    std::cout<<"\n 1: RESTAR";
    std::cout<<"\n 2: MULTIPLICAR";
    std::cout<<"\n 3: DIVIDIR"  ;

    std::cout<<"\n OPCION: ";
}




