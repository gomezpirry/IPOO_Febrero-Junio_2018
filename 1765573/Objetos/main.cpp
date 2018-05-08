#include "calculadora.h"

int main(int argc, char *argv[])
{
    Calculadora calc;
    int largo;
    char opcion;
    int x =0;
    int y =0;
    
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
            default:
                std::cerr<<"ERROR yuli";
                break;
            }
        
    system("pause");}
    


       

