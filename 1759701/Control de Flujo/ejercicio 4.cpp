//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	float num1, num2,suma, resta, multiplicacion, division, porcentaje;
	char opcion;
	
	/// OK
	do {
		cout<<"\BIENVENIDO A UN NUEVO PROGRAMA"<<endl;
	    cout<<"1).Sumar"<<endl;
	    cout<<"2).Restar"<<endl;
	    cout<<"3).Multiplicar"<<endl;
	    cout<<"4).Dividir"<<endl;
	    cout<<"5).Calcular el procentaje"<<endl;
	    cout<<"6).Salir"<<endl;
	
	    cout<<" POR FAVOR Selecciona la operacion que deses hacer: ";cin>>opcion;
	    system("cls");
	    
		// OK
        switch(opcion){
    	  case '1': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;
                  suma = num1 + num2;
                  cout<<"La suma es: "<<suma;break;
          case '2': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;	
                  resta = num1 - num2;
                  cout<<"La resta es: "<<resta;break;
		  case '3': cout<<"Ingrese un numero: ";cin>>num1;
                  cout<<"Ingrese un numero: ";cin>>num2;	
                  multiplicacion = num1 * num2;
                  cout<<"La multiplicacion es: "<<multiplicacion;break;
		  case '4': cout<<"Ingrese un numero: ";cin>>num1;
                    cout<<"Ingrese un numero: ";cin>>num2;	
                    division = num1 / num2;
                    cout<<"La division es: "<<division<<endl;break;
		  case '5' :cout<<"Ingrese un numero: ";cin>>num1;
                   cout<<"Ingrese el porcentaje: ";cin>>num2;	
                   porcentaje = (num1) * (num2/100);
                  cout<<"El porcentaje es: "<<porcentaje;break;
		  case '6': exit(0);break;
		
		  default: cout<<"\nLa opcion ingresada no existe";break;
		
	}
}while (opcion != '6');

	
}
