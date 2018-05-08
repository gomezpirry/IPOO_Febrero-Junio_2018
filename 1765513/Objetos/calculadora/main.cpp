#include "calculadora.h"

int main()
{
    Calculadora calc;
    char respuesta[10] = "";
    std::string otraRespuesta = "exit";

    char opcion;

    system("");
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
                std::cerr<<"intentarlo";
                break;
        }
        std::cin.get();
        std::cout<<"\n\n\tSi deseas salir escriba exit en otro caso Enter: ";
        std::cin.getline(respuesta,10);
        system("cls");
    }
    while(respuesta != otraRespuesta);
    system("cls");

    return 0;

}
