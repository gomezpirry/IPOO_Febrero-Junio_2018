#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora(){
    numero1 = 0.0;
    numero2 = 0.0;
    resultado = 0.0;
}


void Calculadora::suma(){
     insertar();
     resultado = numero1 + numero2;
     imprimir();
}

void Calculadora::resta(){
     insertar();
     resultado = numero1 - numero2;
     imprimir();
}

void Calculadora::multiplicacion(){
     insertar();
     resultado = numero1 * numero2;
     imprimir();
}

void Calculadora::division(){
     insertar();
     if(numero2 != 0){
         resultado = numero1 / numero2;
         imprimir();
     }
     else
         cout<<"Imposible dividir entre 'Cero'";
     
}

void Calculadora::porcentaje(){
	insertar();
	resultado = (numero1 / 100) * numero2;
	imprimir();
}


void Calculadora::insertar()
{
    cout<<"Ingresa el primer valor: ";
    cin>>numero1;
    cout<<"Ingresa el segundo valor: ";
    cin>>numero2;
}

void Calculadora::imprimir()
{
    cout<<"\nEl resultado es: "<<resultado;
}

void Calculadora::Menu()
{
    cout<<"\t\t********************************************\n";
    cout<<"\t\t*\tFunciones para una calculadora     *\n";
    cout<<"\t\t*\t                                   *\n";
    cout<<"\t\t*\t1)SUMAR                            *\n";
    cout<<"\t\t*\t2)RESTAR                           *\n";
    cout<<"\t\t*\t3)MULTIPLICAR                      *\n";
    cout<<"\t\t*\t4)DIVIDIR                          *\n";
    cout<<"\t\t*\t5)PORCENTAJE                       *\n";
    cout<<"\t\t********************************************\n";
    cout<<"\n OPCION: ";
}

