#include "calculadora.cpp"
#include <iostream>


int main(int argc, char *argv[]){
    Calculadora calc;
    char respuesta[10] = "";
    string otraRespuesta = "exit";
    int largo;
    char opcion;
    do
    {
        calc.Menu();
        cin>>opcion;    

        switch (opcion)
        {
            case 49:
                calc.suma();
                cout<<endl;
                break;
            case 50:
                calc.resta();
                cout<<endl;
                break;
            case 51:
                calc.multiplicacion();
                cout<<endl;
                break;
            case 52:
                calc.division();
                cout<<endl;
                break;
            case 53:
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

