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

void Calculadora::imprimir()
{
    std::cout<<"\nEl resultado es: "<<resultado;
}



void Calculadora::Menu()
{
    system("color 0e");
    std::cout<<"\t\t==============================================\n";
    std::cout<<"\t\t||******************************************||\n";
    std::cout<<"\t\t||*\tFunciones para una calculadora     *||\n";
    std::cout<<"\t\t||*\t                                   *||\n";
    std::cout<<"\t\t||*\t0)SUMAR                            *||\n";
    std::cout<<"\t\t||*\t1)RESTAR                           *||\n";
    std::cout<<"\t\t||*\t2)MULTIPLICAR                      *||\n";
    std::cout<<"\t\t||*\t3)DIVIDIR                          *||\n";
    std::cout<<"\t\t||*\t8)TABLAS                           *||\n";
    std::cout<<"\t\t||******************************************||\n";
    std::cout<<"\t\t==============================================\n";
    std::cout<<"\n OPCION: ";
}


