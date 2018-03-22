//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

/*Se requiere un programa para calcular las notas de los estudiantes de un curso basado
en las siguientes consideraciones:
Se tiene una estructura llamada Estudiante que tiene los siguientes miembros:
nombre del estudiante, codigo del estudiante, nota del quiz1, nota del quiz2, nota
del parcial, nota del proyecto y nota nal.
Se tiene un arreglo de estructuras Estudiante donde cada ndice del arreglo corresponde
a un estudiante. 
Para cargar los valores del arreglo se puede usar un ciclo o se pueden cargar
directamente en el archivo .cpp
Calcule la nota nal de cada estudiante teniendo que la evaluacion del curso es la
siguiente:
 quizes: 25%
 parcial: 35%
 proyecto: 40%
Finalmente mueste en consola la lista de todos los estudiantes con todas las notas
incluyendo la nota nal*/

using namespace std;

struct Estudiante {
	
	string nombre;
	int codigo;
	float quiz1;
	float quiz2;
	float parcial;
	float proyecto;
	float final;
};

void mostrarEstudiantes(Estudiante arreglo [], int s){
	
	cout << "Nombre\t" <<"Codigo\t" <<"Quiz1\t" <<"Quiz2\t" <<"Parcial\t" <<"Proyecto\t" <<"Final\t";
	
	for (int i = 0; i < s; i++){
		
		
		cout << arreglo[i].nombre << "\t" << arreglo[i].codigo <<"\t"<< arreglo[i].quiz1 << "\t" << arreglo[i].quiz2 <<"\t"
		<< arreglo[i].parcial << "\t" << arreglo[i].proyecto <<"\t" << arreglo[i]. final << "\t";
	}
}

void calcularNotas(Estudiante arreglo[], int s){
	
	for (int i = 0; i < s; i++){
		arreglo[i].final = ((arreglo[i].quiz1 + arreglo[1].quiz2) + arreglo[i].parcial + arreglo[i].proyecto * 0.4);
	}
	}


int main (){
	
	int cantidad;
	cout<< "INGRESE LA CANTIDAD DE ESTUDIANTES: ";cin>> cantidad;
	
// cons int size = cantidad;
	Estudiante alumnos[cantidad];
	
	for (int i = 0; i < cantidad; i++){
		
		cout << "ingrese el nombre: "; cin >> alumnos[i]. nombre;
		cout <<"\n";
		cout << "ingrese el codigo: "; cin >> alumnos[i]. codigo;
		cout <<"\n";
		cout << "ingrese el quiz1: "; cin >> alumnos[i]. quiz1;
		cout <<"\n";
		cout << "ingrese el quiz2: "; cin >> alumnos[i]. quiz2;
		cout <<"\n";
		cout << "ingrese el parcial: "; cin >> alumnos[i]. parcial;
		cout <<"\n";
		cout << "ingrese el EL proyecto: "; cin >> alumnos[i]. proyecto;
		cout <<"\n";
		
		
	}
	calcularNotas(alumnos, cantidad);
	mostrarEstudiantes(alumnos, cantidad);
}
