//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	float numero1, numero2,suma, resta, multiplicacion, division, porcentaje;
	char opcion;
	

	do {
		cout<<"\n*************BIENVENIDO AL PROGRAMA**************"<<endl;
	    cout<<"A).Para Sumar\n";
	    cout<<"B).Para Restar\n";
	    cout<<"C).Para Multiplicar\n";
	    cout<<"D).Para Dividir\n";
	    cout<<"E).Para Calcular el procentaje\n";
	    cout<<"F).Para Salir\n";
	
	    cout<<"Selecciona la operacion que desea hacer: ";cin>>opcion;
	    system("cls");
	    
		/// OK
        switch(opcion){
    	  case 'A': cout<<"Ingrese un numero: ";cin>>numero1;
                  cout<<"Ingrese otro numero: ";cin>>numero2;
                  suma = numero1 + numero2;
                  cout<<"La suma es: "<<suma;break;
          case 'B': cout<<"Ingrese un numero: ";cin>>numero1;
                  cout<<"Ingrese otro numero: ";cin>>numero2;	
                  resta = numero1 - numero2;
                  cout<<"La resta es: "<<resta;break;
		  case 'C': cout<<"Ingrese un numero: ";cin>>numero1;
                  cout<<"Ingrese otro numero: ";cin>>numero2;	
                  multiplicacion = numero1 * numero2;
                  cout<<"La multiplicacion es: "<<multiplicacion;break;
		  case 'D': cout<<"Ingrese un numero: ";cin>>numero1;
                    cout<<"Ingrese otro numero: ";cin>>numero2;	
                    division = numero1 / numero2;
                    cout<<"La division es: "<<division<<endl;break;
		  case 'E' :cout<<"Ingrese un numero: ";cin>>numero1;
                   cout<<"Ingrese el porcentaje: ";cin>>numero2;	
                   porcentaje = (numero1) * (numero2/100);
                  cout<<"El porcentaje es: "<<porcentaje;break;
		  case 'F': exit(0);break;
		
		  default: cout<<"\nLa opcion ingresada no existe";break;
		
	}
}while (opcion != 'F');

	
}
