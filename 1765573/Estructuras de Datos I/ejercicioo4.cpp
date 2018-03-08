//-------------------------------------------------
//   Calificación: 0.8
//
//  * No valida que el arreglo y el dato tengan el mismo tipo
//--------------------------------------------------

/*Se requiere realizar un programa que calcule la cantidad de
veces que se repite un valor en un arreglo. El programa tiene un arreglo de alg�un tipo
de dato (char, float, int) y una variable buscar del mismo tipo del arreglo. Tenga en
cuenta que un arreglo de caracteres puede ser declarado e inicializado de la siguiente
forma:
char p al a b r a s [ 1 0 ] = � a b c d efg hi � ;
Si los tipos de datos del arreglo y la variable no coinciden debe mostrar un mensaje
y salir del sistema; use esta instrucci�on para salir (exit(EXIT FAILURE);) y est�a para
obtener el tipo de dato (typeid(nombre variable).name()); para usar esta instrucci�on
debe incluir la librer�ia typeinfo (#include<typeinfo>) . Se debe definir una variable
donde se indique cuantas veces se encuentra el valor de la variable buscar en el arreglo
e imprimirlo en pantalla.*/

#include <iostream>
#include<typeinfo>


using namespace std;

int main (){
 
 int arreglo [10] = {1, 4, 3, 4, 5, 1, 7, 8, 4, 10};
 int buscar = 4, repetido = 0;
 /// No valida que los tipos sean iguales
 for(int i = 0; i < 10; i++){
 
 if (arreglo[i] != buscar){ 
  exit; /// esta instruccion no hace nada
 }else{
  typeid(buscar).name(); /// Esta instrucción no hace nada
  repetido++;
 }
}
cout<<"El numero a buscar es : "<<buscar<<" y esta repetido "<<repetido<<" veces";

	
	return 0;
}
