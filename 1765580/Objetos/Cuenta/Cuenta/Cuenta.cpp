#include "Cuenta.h"
#include <fstream>
#include <iostream>
#include "stdlib.h"

Cuenta::Cuenta()
{
}

Cuenta::Cuenta(int numeroCuenta, string password, float fondosInicales)
{
    this->numeroCuenta = numeroCuenta;
    this->password = password;
    this->fondos = fondosInicales;
    numeroTransacciones=0;

    ofstream archivo;
    archivo.open("Datos.txt", ios::out);
    archivo << "------------------------------"<<endl;
    archivo << "cuenta creada"<<endl;
    archivo << "numero de cuenta = " << numeroCuenta<<endl;
    archivo << "contraseña = " << password<<endl;
    archivo << "fondos Inicales = " << fondosInicales<<endl;
    archivo << "numero transacciones = " << numeroTransacciones<<endl;
    archivo << "------------------------------"<<endl;
    archivo.close();
}

Cuenta::~Cuenta()
{
}

void Cuenta::consignacion(float cantidad)
{
    fondos += cantidad;
    numeroTransacciones++;

    ofstream archivo;
    archivo.open("Datos.txt", ios::app);
    archivo << "------------------------------"<<endl;
    archivo << "consignacion"<<endl;
    archivo << "consignacion = " << cantidad<<endl;
    archivo << "saldo = " << fondos<<endl;
    archivo << "------------------------------"<<endl;
    archivo.close();
}

bool Cuenta::retiro(float cantidad)
{
    numeroTransacciones++;

    ofstream archivo;
    archivo.open("Datos.txt", ios::app);
    archivo << "------------------------------"<<endl;

    if (cantidad>fondos)
    {
        archivo << "retiro de dinero fallido"<<endl;
        archivo << "cantidad a retirar = " << cantidad<<endl;
        archivo << "saldo = " << fondos<<endl;
        archivo << "------------------------------"<<endl;

        return false;
    }
    else
    {
        fondos -= cantidad;
        archivo << "retiro de dinero "<<endl;
        archivo << "cantidad retirada = " << cantidad<<endl;
        archivo << "saldo = " << fondos<<endl;
        archivo << "------------------------------"<<endl;
    }


    archivo.close();
}

float Cuenta::consultaSaldo()
{
    numeroTransacciones++;

    ofstream archivo;
    archivo.open("Datos.txt", ios::app);
    archivo << "------------------------------"<<endl;
    archivo << "consulta de saldo"<<endl;
    archivo << "Saldo actual = " << fondos<<endl;
    archivo << "------------------------------"<<endl;
    archivo.close();
    return fondos;
}

int Cuenta::consultarTransacciones()
{
    numeroTransacciones++;

    ofstream archivo;
    archivo.open("Datos.txt", ios::app);
    archivo << "------------------------------"<<endl;
    archivo << "consulta Transacciones"<<endl;
    archivo << "Transacciones hasta el momento: "<< numeroTransacciones<<endl;
    archivo << "------------------------------"<<endl;
    archivo.close();

    cout<<"resumen de transacciones"<<endl;

    ifstream texto("Datos.txt");
    string linea;
    while(getline(texto, linea))
    {
        cout << linea << endl;
    }
    texto.close();

    return numeroTransacciones;
}

void Cuenta::cambiarContrasena(string nuevaPassword)
{
    numeroTransacciones++;

    ofstream archivo;
    archivo.open("Datos.txt", ios::app);
    archivo << "------------------------------"<<endl;
    archivo << "cambio contraseña"<<endl;
    archivo << "contraseña antigua = " << password<<endl;
    archivo << "contraseña nueva = " << nuevaPassword<<endl;
    archivo << "------------------------------"<<endl;
    archivo.close();
    password = nuevaPassword;
}

bool Cuenta::acceder(int numero, string pass)
{
    return ((numero == numeroCuenta) and (pass == password));
}

int main()
{
    Cuenta cuenta;
    int opc;

    do
    {
        system("cls");
        cout<<"******************************"<<endl;
        cout<<"********  BancoTulua  ********"<<endl;
        cout<<"******************************"<<endl;
        cout<<endl;
        cout << "selecione una opcion" << endl;
        cout << "1 crear cuenta" << endl;
        cout << "2 para ingresar a la cuenta" << endl;
        cout << "0 salir" << endl;
        cout << "--> ";
        cin >> opc;
        switch (opc)
        {
        case 1:
        {
            int codigo;
            string contrasena;
            int saldo;
            system("cls");

            cout<<"******************************"<<endl;
            cout<<"********  BancoTulua  ********"<<endl;
            cout<<"******************************"<<endl;
            cout<<endl;


            cout << "ingrese codigo de cuenta: ";
            cin >> codigo;
            cout << endl;
            cout << "ingrese contrasena: ";
            cin >> contrasena;
            cout << endl;
            cout << "ingrese saldo inicial: ";
            cin >> saldo;
            cout << endl;
            cuenta = Cuenta(codigo, contrasena, saldo);
        }
        break;
        case 2:
        {
            int cod;
            string clave;
            do
            {
                system("cls");

                cout<<"******************************"<<endl;
                cout<<"********  BancoTulua  ********"<<endl;
                cout<<"******************************"<<endl;
                cout<<endl;

                cout << "ingrese numero de cuenta: ";
                cin >> cod;
                cout << endl;
                cout << "ingrese contrasena: ";
                cin >> clave;
                cout << endl;

                if(cuenta.acceder(cod, clave) == false)
                {
                    system("cls");

                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;

                    cout << "contraseña  y/o numero de cuenta incorrecta" << endl;
                    cout << "intente nuevamente" << endl;
                    system("pause");
                }

            }
            while (cuenta.acceder(cod, clave) == false);

            int opcion;
            do
            {
                system("cls");

                cout<<"******************************"<<endl;
                cout<<"********  BancoTulua  ********"<<endl;
                cout<<"******************************"<<endl;
                cout<<endl;
                cout << "selecione una opcion" << endl;
                cout << "1 consignar" << endl;
                cout << "2 retirar" << endl;
                cout << "3 consulta saldo" << endl;
                cout << "4 consultar Transacciones" << endl;
                cout << "5 cambiar contrasena" << endl;
                cout << "0 salir" << endl;
                cout << "--> ";
                cin >> opcion;
                int monto;
                switch (opcion)
                {
                case 1:
                    system("cls");

                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;
                    cout << "ingrese el monto a consignar" << endl;
                    cin >> monto;
                    cuenta.consignacion(monto);
                    system("pause");
                    break;
                case 2:
                    system("cls");

                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;
                    cout << "ingrese el monto a retirar" << endl;
                    cin >> monto;
                    while(cuenta.retiro(monto)==false)
                    {
                        system("cls");

                        cout<<"******************************"<<endl;
                        cout<<"********  BancoTulua  ********"<<endl;
                        cout<<"******************************"<<endl;
                        cout<<endl;
                        cout<<"saldo insuficiente solo cuenta con :"<<cuenta.consultaSaldo()<<endl;
                        cout << "ingrese el monto a retirar" << endl;
                        cin >> monto;
                    }
                    system("pause");
                    break;
                case 3:
                    system("cls");

                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;

                    cout << "saldo actual de :" << cuenta.consultaSaldo() << endl;
                    system("pause");
                    break;
                case 4:
                    system("cls");

                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;

                    cuenta.consultarTransacciones();
                    system("pause");
                    break;
                case 5:
                    system("cls");


                    cout<<"******************************"<<endl;
                    cout<<"********  BancoTulua  ********"<<endl;
                    cout<<"******************************"<<endl;
                    cout<<endl;

                    string contra;
                    cout << "ingrese contra nueva: ";
                    cin >> contra;
                    cout << endl;
                    cuenta.cambiarContrasena(contra);
                    system("pause");
                    break;
                }
            }
            while (opcion != 0);
        }


        break;
        }
    }
    while (opc != 0);


    return 0;
}
