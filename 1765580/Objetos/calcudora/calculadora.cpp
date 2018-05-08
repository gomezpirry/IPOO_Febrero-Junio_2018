#include "calculadora.h"
#include <iostream>
#include <stdlib.h>

Calculadora::Calculadora(double numero1, double numero2, double resultado)
{
    this->numero1= numero1;
    this->numero2=numero2;
    this->resultado= resultado;
}
Calculadora::~Calculadora()
{
}
double Calculadora::sumar()
{
    resultado= numero1 + numero2;
    return resultado;
}
double Calculadora::restar()
{
    resultado= (numero1 -numero2);
    return resultado;
}
double Calculadora:: multiplicar()
{
    resultado= numero1 * numero2;
    return resultado;
}
double Calculadora:: dividir()
{
    if (numero2 != 0)
    {
        resultado= numero1 / numero2;
    }
    else
        cout<< "imposible dividir"<<endl;
    return resultado;
}
double Calculadora:: porcentaje()
{
    resultado= (numero1 * numero2)/ 100;
    return resultado;
}
int main(int argc, char* arg[])
{
    double numero1;
    double numero2;
    cout<<"ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>numero2;

    Calculadora calculadorsita=Calculadora(numero1,numero2,0.0);

    char opc;
    while(opc != 's')
    {
        cout << "ingrese opcion:\n n para cambiar los numeros \n + para suma \n - para resta \n * para multiplicacion "
             << "\n / para division \n % para porcentaje \n s para salir"<<endl;
        cin >>  opc;
        switch(opc)
        {
        case 's':
            break;
        case 'n':
            cout<<"ingrese el primer numero"<<endl;
            cin>>numero1;
            cout<<"ingrese el segundo numero"<<endl;
            cin>>numero2;
            calculadorsita=Calculadora(numero1,numero2,0.0);
            break;
        case '+':
            cout<<"resultado: " << calculadorsita.sumar()<<endl;
            system("pause");
            break;
        case '-':
            cout<<"resulsultado: " << calculadorsita.restar()<<endl;
            system("pause");
            break;
        case '*':
            cout<<"resultado: " << calculadorsita.multiplicar()<<endl;
            system("pause");
            break;
        case '/':
            cout<<"resultado: " << calculadorsita.dividir()<<endl;
            system("pause");
            break;
        case '%':
            cout<<"resultado: " << calculadorsita.porcentaje()<<endl;
            system("pause");
            break;
        default:
            cout << "ingrese una opcion valida"<<endl;
            system("pause");
            break;
        }
        system("cls");
    }

}
