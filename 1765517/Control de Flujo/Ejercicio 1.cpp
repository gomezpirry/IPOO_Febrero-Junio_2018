//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------


/*Realice un programa que reciba un valor entero entre 0 y 100 por consola e imprima si
ese valor es un numero primo o no.*/

#include<iostream>

using namespace std;

/// Usaste un paradigma funcional

void numeroPrimo (int numero){
	
	int contador=0;
	
	for(int i=1; i<= numero; i++){
			if((numero % i) == 0) {
			
			contador++;
		}
	}
	
	if (contador == 2){
		
		cout << "este es un numero primo \n";
	}
	
	else { 
	
	    cout<<"este no es un numero primo \n"; 
	    
	
	}
}

int main ()
{
cout <<"Ingrese Un Numero: ";
int numero;
cin>> numero;
numeroPrimo (numero);
return 0;

}

