//------------------------------------------
//------ Calificación 0.3
//
// * No evalua ciertas condiciones el else if
//------------------------------------------

/*7. */

#include<iostream>

using namespace std;

int main(){
	int dias,salario,antiguedad,salario2;
	
	cout<<"ingrese los dias trabajados"<<endl;
	cin>>dias;
	
	cout<<"ingrese el salario"<<endl;
	cin>>salario;
	
	cout<<"ingrese la antiguedad"<<endl;
	cin>>antiguedad;
	
	
	if(antiguedad>=10){
		salario=salario*dias;
		salario+=salario*0.1;
		cout<<salario<<endl;
		}
	else if(antiguedad<10 && antiguedad>=5){
		salario=salario*dias;
		salario+=salario*0.07;
		cout<<salario<<endl;
		}
	else if(antiguedad<=5 && antiguedad>=3){
		salario=salario*dias;
		salario+=salario*0.05;
		cout<<salario<<endl;
		}
	else if(antiguedad<=3){
		salario=salario*dias;
		salario+=salario*0.03;
		cout<<salario<<endl;
		}

		/// Esto valores nunca seran evaluados debido a las condiciones de arriba (tienes que separar el if para antiguedad uy el if para dias)
	else if(dias>=10 && dias<=20){
		salario2 = salario*0.05;
		cout<<"aumento por dias trabajados:"<<salario2<<endl;
		}
	else if(dias>20 && dias<=30){
		salario2 = salario*0.05;
		cout<<"aumento por dias trabajados:"<<salario2<<endl;
		}
		cout<<"salario total:"<<salario2+salario<<endl;
	
	}

