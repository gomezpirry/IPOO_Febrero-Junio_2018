//------------------------------------------
//------ Calificación 0.6
//
// * Falto operación de salir (ciclo infinito)
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	float num1, num2,suma, resta, multiplicacion, division, porcentaje;
	char opcion;
	

	do {

                /// Te falto una operación para salir
             cout<<"\nCALCULATOR PROGRAM"<<endl;
	    cout<<"1).Sumar"<<endl;
	    cout<<"2).Restar"<<endl;
	    cout<<"3).Multiplicar"<<endl;
	    cout<<"4).Dividir"<<endl;
	    cout<<"5).Calcular el procentaje"<<endl;
	   

	    cout<<"Selecciona la operacion que desea hacer: ";cin>>opcion;
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
	
		  default: cout<<"\nLa opcion ingresada no existe";break;
		
	}
}while (opcion != 'F'); /// Te falto definir una operación en el menu para terminar el ciclo

	
}
