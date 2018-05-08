#include <iostream>
#include "calculadora.h"


/// Copio y pego http://programacionparacoccidio.blogspot.com.co/2011/07/calculadora-en-c-orientada-objetos.html

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

void Calculadora::raizCuadrada()
{
     Insertar();
     if(numero1 >= 0){
         resultado = sqrt(numero1);
         imprimir();
     }
     else
        std::cerr<<"No existen raices negativas";
}

void Calculadora::chicharronera()
{
     double x1;
     double x2;
     ingresar();
     resultado = ((numero2*numero2)-(4*(numero1*numero3)));
     resultado = sqrt (resultado);
     x1 = ((-numero2)- resultado)/(2*numero1);
     x2 = ((-numero2)+ resultado)/(2*numero1);
     std::cout<<"\nX = "<<x1<<"\t";
     std::cout<<"X'= "<<x2;
}

void Calculadora::factorial()
{
     Insertar();
     resultado = 1;
     if(numero1 >= 0){
         for(numero1;numero1 != 0;--numero1)
             resultado *= numero1;
         imprimir();
     }
     else
         std::cerr<<"Error";
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
void Calculadora::primos()
{
    std::cout<<"Introduce el Numero: ";
    std::cin>>numero;
    if((numero != 2 & numero%2 == 0)||(numero != 3 & numero%3 == 0)||
     (numero != 5 & numero%5 == 0)||(numero != 7 & numero%7 == 0)||
     (numero != 7 & numero%7 == 0)||(numero != 11 & numero%11 == 0)||
     (numero != 13 & numero%13 == 0)||(numero != 17 & numero%17 == 0)||
     (numero != 23 & numero%23 == 0)||(numero != 29 & numero%29 == 0)||
     (numero != 31 & numero%31 == 0)||(numero != 37 & numero%37 == 0))      
        std::cout<<"Es Par";
    else
        std::cout<<"Es Primo";
}
void Calculadora::tabla()
{
    system("cls");
    system("color 0c");
        
    std::cout<<"\t\t";
    std::cout<<"Tabla De multiplicar\n\t_____________________________________";
    std::cout<<"\n Introduce un numero: ";
    std::cin>>numero;
    int numeroMultiplicado = 1;
        
    std::cout<<"\t******************************\n";
        
    while (numeroMultiplicado < 11)
    {
            
        std::cout<<"\t*\t"<<numero<<" x "<<numeroMultiplicado<<" = "<<
        (numero * numeroMultiplicado)<<"       "<<std::endl;
        numeroMultiplicado++;
    }
    std::cout<<"\t******************************\n";
}
void Calculadora::IMC()
{   
    system("cls");
    std::cout<<"\t\t==========INDICE DE MASA CORPORAL=========="<<std::endl;
    std::cout<<"\tIntroduce tu peso: ";
    std::cin>>numero1;
    std::cout<<"\tIntroduce tu altura en Metros: ";
    std::cin>>numero2;
    
    resultado = numero1 / (numero2 * numero2);
    
    std::cout<<"Tu Indice De Masa Corporal Es: "<<resultado;
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
    std::cout<<"\t\t||*\t4)RAIZ CUADRADA                    *||\n";
    std::cout<<"\t\t||*\t5)CHICHARRONERA                    *||\n";
    std::cout<<"\t\t||*\t6)FACTORIAL                        *||\n";
    std::cout<<"\t\t||*\t7)PRIMOS                           *||\n";
    std::cout<<"\t\t||*\t8)TABLAS                           *||\n";
    std::cout<<"\t\t||*\t9)IMC                              *||\n";
    std::cout<<"\t\t||******************************************||\n";
    std::cout<<"\t\t==============================================\n";
    std::cout<<"\n OPCION: ";
}

void Calculadora::Exit(int x, int y)
{
    Calculadora calc;

    std::cout<<"please wait...\n";
    for(int i = 0; i <= 79;++i)
        std::cout<<"_";
    x = 2;
    y = 2;
    system("color 0c");
    for(int i = 0; i <= 75;++i){
        calc.gotoxy(x++,y); 
        std::cout<<"_";
        Sleep(3 * 1000 / 80);
    }
    system("color 0e");
    x = 77;
    y = 20;
    for(int i = 77; i >= 2;--i){
        calc.gotoxy(x--,y); 
        std::cout<<"_";
        Sleep(3 * 1000 / 80);
    }
    system("color 0a");
    x = 2;
    y = 3;
    for(int i = 2; i <= 19;++i){
        calc.gotoxy(x,y++); 
        std::cout<<"|";
        Sleep(3 * 1000 / 80);
    }
    system("color 09");
    x = 77;
    y = 20;
    for(int i = 21; i >= 4;--i){
        calc.gotoxy(x,y--); 
        std::cout<<"|";
        Sleep(3 * 1000 / 80);
    }
    system("color 0f");      
    x = 60;
    y = 21;    
    for(int i = 20; i <=60;++i){
        calc.gotoxy(x--,y);
        std::cout<<"=";
        Sleep(4 * 1000 / 80);
        calc.gotoxy(i,22);
        std::cout<<"=";
        Sleep(4 * 1000 / 80);
    }
    system("color 06");
    x =32;
    y =7;
    calc.gotoxy(x,y++);
    std::cout<<"-------------";
    calc.gotoxy(x,y++);
    std::cout<<"|Ð*-------*Ð|";
    calc.gotoxy(x,y++);    
    std::cout<<"| *-------* |";
    calc.gotoxy(x,y++);
    std::cout<<"| | ADIOS | |";
    calc.gotoxy(x,y++);
    std::cout<<"| *-------* |";
    calc.gotoxy(x,y++);
    std::cout<<"|Ð*-------*Ð|";
    calc.gotoxy(x,y++);
    std::cout<<"-------------";
    std::cin.get();
}
void Calculadora::gotoxy(int x, int y) 
{ 
    HANDLE hCon; 
    COORD dwPos; 

    dwPos.X = x; 
    dwPos.Y = y; 
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); //Esto es para 
    SetConsoleCursorPosition(hCon,dwPos); //no tener que compilar 
    //en el borlandc o el turboc
}


#include "calculadora.h"

int main(int argc, char *argv[])
{
    Calculadora calc;
    char respuesta[10] = "";
    std::string otraRespuesta = "exit";
    int largo;
    char opcion;
    int x =0;
    int y =0;
    system("title Daniel Roman");
    do
    {
        calc.Menu();
        std::cin>>opcion;    

        switch (opcion)
        {
            case 48:
                calc.suma();
                std::cout<<std::endl;
                break;
            case 49:
                calc.resta();
                std::cout<<std::endl;
                break;
            case 50:
                calc.multiplicacion();
                std::cout<<std::endl;
                break;
            case 51:
                calc.division();
                std::cout<<std::endl;
                break;
            case 52:
                calc.raizCuadrada();
                std::cout<<std::endl;
                break;
            case 53:
                calc.chicharronera();
                break;
            case 54:
                 calc.factorial();
                 break;
            case 55:
                 calc.primos();
                 break;
            case 56:
                 calc.tabla();
                 break;
            case 57:
                 calc.IMC();
                 break;
            default:
                std::cerr<<"ERROR VUELA A INTENTARLO IDIOTA";
                break;
        }
        std::cin.get();
        std::cout<<"\n\n\tSi deseas salir escriba exit en otro caso Enter: ";
        std::cin.getline(respuesta,10);
        system("cls");
    }
    while(respuesta != otraRespuesta);
    system("cls");
    calc.Exit(x,y);
    return 0;

}
