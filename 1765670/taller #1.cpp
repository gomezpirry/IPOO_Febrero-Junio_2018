//------------------------------------------
//------ Calificación 0.5
//
// * No esta bien definida la función main
//------------------------------------------

//Realice un programa que reciba un valor entero entre 0 y 100 por consola e imprima si
//ese valor es un numero primo o no

#include <iostream>

using namespace std;
main(){ /// Falta el int en el main (genera error)

   int num,divisores;
   
  cout <<"Ingrese numero: \n"; cin>>num;
   
   for(int j=1;j<num;j++){
         if (num%j==0){
         	divisores++;
		 }
  
  }
  
  // Para que sea primo solo puede tener 2 divisores (divisores == 2)
 // Con esta condición el 1 seria un numero primo y el 1 no es primo
  if(divisores<=2){
  	
  	cout<<"\nEl numero es primo";
  	
  }
   else
   cout<<"\nEl numero no es primo";
 

} 
