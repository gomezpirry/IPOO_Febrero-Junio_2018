//------------------------------------------
//------ Calificación 0.3
//
//------------------------------------------

/*7. Realice un programa que calcule el salario de un trabajador basado en los d�ias trabajados,
el pago por d�ia y la antig�uedad. Se solicitan los datos y se calcula el valor del
salario teniendo en cuenta las siguientes condiciones:
Si lleva m�as de 10 a�nos en la empresa se le aplica un aumento del 10 %
Si lleva menos de 10 a�nos pero m�as que 5 se le aplica un aumento del 7 %
Si lleva menos de 5 a�nos pero m�as que 3 se le aplica un aumento del 5 %
Si lleva menos de 3 a�nos se le aplica un aumento del 3 %
2
Adem�as de la antig�uedad, si trabajo entre 10 y 20 d�ias, tiene aumento del 5 %
Adem�as de la antig�uedad, si trabajo entre 20 y 30 d�ias, tiene aumento del 10 %
Calcule el salario y muestrelo en pantalla*/

#include<iostream>

using namespace std;

int main(){
	int dias,salario,antiguedad,salario2;
	
	cout<<"ingrese los dias que laboro"<<endl;
	cin>>dias;
	
	cout<<"ingrese su salario"<<endl;
	cin>>salario;
	
	cout<<"ingrese su antiguedad"<<endl;
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
