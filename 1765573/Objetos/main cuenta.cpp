#include <iostream>


using namespace std;

int main(int argc, char** argv) 
{

  int opcion;
    char sn;
    double saldototal=0;
    double Opcion(int opcion1,double saldototal);     
    do
    {
    system("cls");
    cout<<"\t\t\tOperaciones Bancarias\n";
    cout<<"1. Deposito\n";
    cout<<"2. Retiro\n";
    cout<<"3. Saldo\n";
    cout<<"4. Salir\n\n";
    cout<<"Elija el numero de la opcion: ";cin>>opcion;
    saldototal=Opcion(opcion,saldototal);
    cout<<"Desea continuar con otra operacion s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
    system("cls");
    cout<<"Cerrando Sistema...\n";exit(0);
    return 0;
}
