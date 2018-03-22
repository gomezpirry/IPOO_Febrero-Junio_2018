//-------------------------------------------------
//   Calificación: 1.0
//
//--------------------------------------------------

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
/* Se requiere un programa para calcular las notas de los estudiantes de un curso basado
en las siguientes consideraciones:
Se tiene una estructura llamada Estudiante que tiene los siguientes miembros:
nombre del estudiante, c´odigo del estudiante, nota del quiz1, nota del quiz2, nota
del parcial, nota del proyecto y nota final.
Se tiene un arreglo de estructuras Estudiante donde cada ´indice del arreglo corresponde
a un estudiante. Use como ejemplo el siguiente codigo:
Para cargar los valores del arreglo se puede usar un ciclo o se pueden cargar
directamente en el archivo .cpp
Calcule la nota final de cada estudiante teniendo que la evaluaci´on del curso es la
siguiente:
• quizes: 25 %
• parcial: 35 %
• proyecto: 40 %
Finalmente mueste en consola la lista de todos los estudiantes con todas las notas
incluyendo la nota final */

using namespace std;

struct Estudiante {
	
	string nombre;
	int codigo; 
	float quiz1; 
	float quiz2;
	float parcial;
	float proyecto;
	float notaFinal;
};

void calcularNotas (Estudiante arreglo[], int Y)
{
	

for(int i =0; i<Y;i++){ // No cerro la funcion ni el for
	arreglo[i].final = ((arreglo[i].quiz1+arreglo[i].quiz2)/2)*0.25
	(arreglo[i].proyecto*0.4)+(arreglo[i].parcial*0.5);
	

/// No invoco la funcion para calcular las notas
int main(){
	
	int cantidad;
	cout<<"ingrese la cantidad de estudiantes ";
	cin>> cantidad;
	
	/// Puede hacerlo en un solo for (Muchos for innecesarios
	const size = cantidad;
	Estudiante estudiantes[size];
	
	for(int i=0; i< cantidad; i++){
		cout<<"ingrese el nombre: ";
		cin>>estudiante[i].nombre;
		cout<<"\n";
		
    for(int i=0; i< cantidad; i++){
		cout<<"ingrese el codigo: ";
		cin>>estudiante[i].codigo;
		cout<<"\n";
		
	for(int i=0; i< cantidad; i++){
		cout<<"ingrese el quiz1: ";
		cin>>estudiante[i].quiz1;
		cout<<"\n";
		
	for(int i=0; i< cantidad; i++){
		cout<<"ingrese el quiz2: ";
		cin>>estudiante[i].quiz2;
		cout<<"\n";
		
	for(int i=0; i< cantidad; i++){
		cout<<"ingrese el parcial: ";
		cin>>estudiante[i].parcial;
		cout<<"\n";
		
	for(int i=0; i< cantidad; i++){
		cout<<"ingrese el proyecto: ";
		cin>>estudiante[i].proyecto;
		cout<<"\n";
		
	}
	 
	}
		
	return 0;
}
