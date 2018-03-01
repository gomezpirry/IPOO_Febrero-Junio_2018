//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

/* ejercicio # 1. Realice un programa que reciba un valor entero entre 0 y 100 por consola e imprima si
ese valor es un numero primo o no (Pista: Utilice el residuo para calcular los m�ultiplos).
 */
#include<iostream>
#include<string>

using namespace std;

int main(){

 int i, numero, contador =  0;

 cout<<"Digite el numero: \n";
 cin >> numero;

/// OK
 for (i=1; i<=numero; i++)
  if(numero%i==0)
   contador++;


  if(contador>2)
    cout<<"No es un Numero Primo: \n";

   else
    cout<<"Es un Numero Primo: \n";
}



