#include "calculadora.cpp"
#include <iostream>

int main(int argc, char *argv[]){
    Calculadora calc;
    char respuesta[10] = "";
    string otraRespuesta = "exit";
    char opcion;
    do
    {
        calc.Menu();
        cin>>opcion;    

        switch (opcion)
        {
            case 'A':
                calc.suma();
                cout<<endl;
                break;
            case 'B':
                calc.resta();
                cout<<endl;
                break;
            case 'C':
                calc.multiplicacion();
                cout<<endl;
                break;
            case 'D':
                calc.division();
                cout<<endl;
                break;
            case 'E':
			    calc.porcentaje();
			    cout<<endl;
			    break;
            default:
                cout<<"ERROR, VUELA A INTENTARLO";
                break;
        }
        cin.get();
        cout<<"\n\n\tSi deseas salir escriba exit en otro caso Enter: ";
        cin.getline(respuesta,10);
        system("cls");
    }
    while(respuesta != otraRespuesta);
}

