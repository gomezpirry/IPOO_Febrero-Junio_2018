#include "cuenta.h"

cuenta::cuenta()

void Calculadora::saldototal()
{   system("cls");
    saldototal=saldototal+deposito-retiro;
    return saldototal;    
}
 
void Calculadora::deposito()
{
     
    double deposito=0;
    char sn;
    do
    {
LDeposito:
    system("cls");
    cout<<"Ingrese cantidad a Depositar: ";
    cin>>deposito;
     
    while(deposito<=0)
    {
        cout<<"Desea ingresar un valor valido /N: ";
        cin>>sn;
        if(sn=='S'||sn=='s')
            continue  LDeposito;
        else
            exit(0);
    }
    saldototal=saldo(0,deposito,saldototal);
    cout<<"Desea realizar otro deposito /N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
     
       return saldototal;
    }
 
 
 
void Calculadora::retiro()

        {
        double retiro=0;
        char sn;
        
        system("cls");
        if (saldototal==0)
        {cout<<"numero de cuenta"<<numCuenta<<"No tiene saldo \n";
        cout<<"Desea realizar otra operacion s/S n/N: ";cin>>sn;
        if(sn=='S'||sn=='s')
        {
        system("cls");
        main(); // Main no esta definida
        }
        else
        exit(0);
         
        }
        do
        {
            LRetir:
            system("cls");
            cout<<"Ingrese cantidad a Retirar: ";
            cin>>retiro;
 
            while(saldotoatal<retiro)
            {   
                cout<<"el numero de cuenta"<<numCuenta"Ud. no cuenta con saldo suficiente para hacer ese retiro\n";
                break reintentar;
            }
             
            while(retir<=0)
            {
            reintentar:
                cout<<"Desea ingresar un valor valido /N: ";
                cin>>sn;
                if(sn=='S'||sn=='s')
                    continue LRetir;
                else
                    exit(0);    
            }
            saldot=saldo(retir,0,saldot);
            cout<<"Desea realizar otro retiro N: ";cin>>sn;
            }while(sn=='s'||sn=='S');
     
            return saldot;
            }
 
 
 
double Opcion(int opcion1,double saldototal)
{
    switch(opcion1)
    {
    case 1:saldototal=deposito(saldototal); /// no se puede hacer asignación porque deposito no retorna nada (void)
	break;
	
    case 2:saldototal=retiro(saldototal); /// no se puede hacer asignación porque retiro no retorna nada (void)
	break;
	
    case 3: 
	{
            saldototal=saldo(0,0,saldototal);
            cout<<"el numero de cuenta"<<numCuenta<<"tiene un saldo total "<<saldototal<<" pesos\n";
    }break;
    
    case 4:
	{system("cls");cout<<"Cerrando Sistema...";exit(0);
	
	}break;
     
    }
    return saldot; /// La variable saldot no esta declarada
    }
 
 

{ /// NO cierra este parentesis
  
 
 
