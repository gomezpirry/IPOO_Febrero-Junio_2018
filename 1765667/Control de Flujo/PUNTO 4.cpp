//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	float num1, num2,suma, resta, multiplicacion, division, porcentaje;
	char opcion;
	

	do {
		cout<<"\nBIENVENIDO AL PROGRAMA"<<endl;
	    cout<<"A).Sumar"<<endl;
	    cout<<"B).Restar"<<endl;
	    cout<<"C).Multiplicar"<<endl;
	    cout<<"D).Dividir"<<endl;
	    cout<<"E).Calcular el procentaje"<<endl;
	    cout<<"F).Salir"<<endl;
	
	    cout<<"Selecciona la operacion que desea hacer: ";cin>>opcion;
	    system("cls");
	    
        switch(opcion){
    	  case 'A': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;
                  suma = num1 + num2;
                  cout<<"La suma es: "<<suma;break;
          case 'B': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;	
                  resta = num1 - num2;
                  cout<<"La resta es: "<<resta;break;
		  case 'C': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;	
                  multiplicacion = num1 * num2;
                  cout<<"La multiplicacion es: "<<multiplicacion;break;
		  case 'D': cout<<"Ingrese un numero: ";cin>>num1;
                    cout<<"Ingrese un numero: ";cin>>num2;	
                    division = num1 / num2;
                    cout<<"La division es: "<<division<<endl;break;
		  case 'E' :cout<<"Ingrese un numero: ";cin>>num1;
                   cout<<"Ingrese el porcentaje: ";cin>>num2;	
                   porcentaje = (num1) * (num2/100);
                  cout<<"El porcentaje es: "<<porcentaje;break;
		  case 'F': exit(0);break;
		
		  default: cout<<"\nLa opcion ingresada no existe";break;
		
	}
}while (opcion != 'F');

	
}
