//-------------------------------------------------
//   Calificación: 0.0
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//  * Se sale del programa cuando encuentra el primer valor que no coincide
//--------------------------------------------------

#include <iostream>
#include<typeinfo>


using namespace std;

int main (){

 int arreglo [10] = {1, 6, 3, 6, 5, 4, 7, 8, 6, 10};
 int buscar = 6, repetido = 0;
/// No valida que los tipos sean iguales
 for(int i = 0; i < 10; i++){

 if (arreglo[i] != buscar){
  exit(EXIT_FAILURE); /// esta instruccion sale de la aplicación antes de buscar
 }else{
  typeid(buscar).name(); /// Esta instrucción no hace nada
  repetido++;
 }
}
cout<<"El numero a buscar es : "<<buscar<<" y esta repetido "<<repetido<<" veces";
}
