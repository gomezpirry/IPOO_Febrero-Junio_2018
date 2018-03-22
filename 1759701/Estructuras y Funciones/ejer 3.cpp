//-------------------------------------------------
//   Calificación: 0.8
//
//--------------------------------------------------

#include <iostream>

using namespace std;


struct estudiante{
	string nombre;
	int codigo;
	float quiz1;
	float quiz2;
	float parcial;
	float proyecto;
	float final,
};
 void mostrarestudiantes(estudiante arreglo[], int s){
 	
 	cout << "nombre\t" << "codigo\t" << "quiz1\t" << "quiz2\t" << "parcial\t" << "proyecto\t" << "final\t\n" ;
    for (int i = 0; i < s; i++){
    	cout <<  arreglo[i] . nombre << "\t" << arreglo[i] . codigo << "\t" << arreglo[i] . quiz1 << "\t" 
    	       arreglo[i] . quiz2 << "\t" << arreglo[i] . parcial<< "\t" << arreglo[i] . proyecto << "\t" << arreglo[i] . final << "\t\n"; 
	}
	


 }
 
 /// Falat calcular la nota final
 int main(){
 	int cantidad;
    cout << "ingrese la cantidad de estudiantes: "
	cin  >> cantidad;
	
	const int size = cantidad;
	estudiante estudiantes [cantidad];
	
	for (int i = 0; i cantidad; i++){
		system("cls");
		cout << "estudiante" << i << "\n";
		
		cout << "ingrese nombre: ";
		cin >> estudiantes[i].nombre;
		
		cout << "ingrese codigo: ";
		cin >> estudiantes[i].codigo;
	while(!(cin >> estudiantes[i].codigo)){
			cin.clear();
			cin.bad().ignore(numeric_limits<streamsize)
		}
       
	   
	    cout << "ingrese quiz1: ";
		cin >> estudiantes[i].quiz1;
		
		cout << "ingrese quiz2: ";
		cin >> estudiantes[i].quiz2;
	
		cout << "ingrese parcial1: ";
		cin >> estudiantes[i].parcial1;
	
		cout << "ingrese proyecto: ";
		cin >> estudiantes[i].proyecto;
		
		cout << "ingrese final: ";
		cin >> estudiantes[i].final;
		
	}	
 	
 	mostarestudiantes(estudiantes, cantidad);
 	mostrarestudiantes(estudiantes, ) /// Este genera error, no corre el programa
 	
 }
 

 
