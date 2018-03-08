//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero [3][3];
	
for (int fila=0;fila<3;fila++){
	for (int columna=0;columna<3;columna++){
		cout<<"coloca los numeros ["<<fila<<"]["<<columna<<"]: ";
		cin>>numero[fila][columna];
	}
}

cout<<"matriz original\n";

 for(int fila=0;fila<3;fila++){
 	for(int columna=0;columna<3;columna++){
 		cout<<numero [fila][columna]<<" ";
	 }
 	
      cout<<"\n";
 }

  cout<<"\nMatriz traspuesta\n";
   for(int fila=0;fila<3;fila++){
 	for(int columna=0;columna<3;columna++){
 		cout<<numero [columna][fila]<<" ";
 		
 	}
 	cout<<"\n";
}



	
	
	

	return 0;
	
	
}


