//-------------------------------------------------
//   Calificación: 1.0
//
//  * No valida que los arreglos tengan el mismo tamaño
//--------------------------------------------------


/*Se requiere un programa para calcular las notas de los estudiantes
de un curso basado en las siguientes consideraciones:
Se tiene un arreglo con los nombres de los estudiantes, un arreglo con los c�odigos
de los estudiantes, un arreglo con las notas del quiz1, un arreglo con las notas del
quiz2, un arreglo con las notas del parcial y un arreglo con las notas del proyecto.
Cada �indice del arreglo corresponde a un estudiante y todos los arreglos deben
tener el mismo tama�no, sino debe mostrar un mensaje y salir del programa. Use
esta instrucci�on para salir (exit(EXIT FAILURE);).
Defina un arreglo que almacene las notas finales teniendo que la evaluaci�on del
curso es la siguiente:
� quizes: 25 %
� parcial: 35 %
� proyecto: 40 %
Finalmente mueste en consola la lista de todos los estudiantes con todas las notas
incluyendo la nota final



*/
#include<iostream>
#include<string>

using namespace std;


int main (){

 int capacidad = 4;
// OK, pero no es conveniente usar variables para definir el tamaño del arreglo
 string nombre [capacidad] = {"Daniel","manuel","jose","Maria"};
 int codigo [capacidad] = {1765513,1765544,1764422,1745672};
 float quiz1 [capacidad] = {3.2,2.3,5.0,4.5};
 float quiz2 [capacidad] = {4.5,4.8,3.5,2.0};
 float parcial [capacidad]= {5.0,4.5,4.0,3.5};
 float proyecto [capacidad] = {1.0,1.5,2.0,4.5};

 if (capacidad > 4) /// Nunca se va a cumplir esta condición
 {exit ; // esta sentencia no hace nada
 }else{
 
   for (int i = 0;i < capacidad; i++){
    float quizes = ((quiz1[i]+quiz2[i])/2)* 0.25;
    parcial[i] *= 0.35;
    proyecto [i]*= 0.40;
    float nota_final = quizes + parcial[i]+proyecto[i];

    cout.precision(2);
    cout <<"\n"<< nombre[i]<<"  codigo:"<<codigo[i];
    cout <<"\n quiz total:"<<quizes;
    cout<<"\n parcial:"<<parcial[i];
    cout <<"\nproyecto:"<<proyecto[i]<<"\n";
    cout <<" nota final:"<<nota_final<<"\n";
   } 
}
  
 return 0;
 }
	
	
	
