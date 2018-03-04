

//------------------------------------------
//------ Calificación 0.6
//
// * Genera un ciclo infinito
//------------------------------------------

/*
 *4. Realice un men�u para interactuar en consola basado en las operaciones calculadora. El
programa debe mostrar las siguientes opciones:
Sumar
Restar
Multiplicar
Dividir
Calcular Porcentaje
Cada opci�on tiene asociada una letra. El usuario escribe la letra correspondiente a la
opci�on y el programa debe solicitar los valores para realizar la operaci�on y mostrar el
1
resultado en la consola. Cada vez que se realice una operaci�on, el programa vuelve a
desplegar el men�u. Si se elige una opci�on que no se encuentre en el men�u se despliega
un mensaje indicando la opci�on inv�alida.
 */

#include <iostream>
#include <string>

using namespace std;

int main (){


 int num1,num2,salir = 0,suma = 0, resta = 0, multiplicacion = 0, division = 0, porcentaje = 0;
 char letra;

do{

 cout<<"\nDigite un numero:"<<endl; cin>> num1 ;
    cout<<"digite el segundo numero:"<<endl; cin>> num2;

    cout<<"S suma\nR resta\nM multiplicacion\nD division\nP porcentaje\n escriba 0 para terminar\n"<<endl;


    cout<<"Digite la operacion a realizar:"<<endl;
    cin >> letra;






 suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    porcentaje = (num1*num2)/100;




 switch(letra){
  case 'S':
   cout  << "la suma es: "<<suma;
  break;

  case 'R':
   cout  << "La resta es: "<<resta;
  break;

  case 'M':
   cout  << "La multiplicacion es: "<<multiplicacion;
  break;

  case 'D':
   cout  << "La division es: "<<division;
  break;

  case 'P':
   cout  << "El porcentaje es: "<<porcentaje;
  break;
  default:
   cout  << "La opcion no es valida \n\n";
    break;


    cout<<"\nDigite 0 si desea terminar\n";

    return 0;

  }
      }

   while(salir != letra); // Genera un ciclo infinito cuando porque salir es 0 y letra es char (char = 0 es null)
}


