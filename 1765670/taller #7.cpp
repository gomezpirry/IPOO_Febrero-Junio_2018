//------------------------------------------
//------ Calificación 0.65
//
//------------------------------------------


#include <iostream>


using namespace std;

int main(){
	
	/// pagodeldia no se esta usando
	int diastrabajados,pagodeldia,antiguedad,salario=800000,aumento,total,pagodedia=30000;
	
	cout<<"digita tus a�os de antiguedad";
	cin>>antiguedad;
	
	if (antiguedad>10){
	aumento= salario * 0.10;
	total= aumento + salario;
	cout<<"su aumento por su antiguedad es de:\n"<<total;
     }
     
     else if ((antiguedad>10)&&(antiguedad<5)){
	aumento= salario * 0.07;
	total= aumento + salario;
	cout<<"su aunmento por su antiguedad es de:\n"<<total;
     }
     
    else if ((antiguedad>5)&&(antiguedad<3)){
	aumento= salario * 0.05;
	total= aumento + salario;
	cout<<"su aumento por su antiguedad es de:\n"<<total;
     }
     
    else  {
	aumento= salario * 0.03;
	total= aumento + salario;
	cout<<"su aumento por su antiguedad es de:\n"<<total;
     }
     
     
     cout<<"\n\nIngrese los dias trabajados ";cin>>diastrabajados;
	
	// pagodedia no esta declarada 
	if ((diastrabajados > 10 )&&(diastrabajados < 20)){
		aumento = (pagodedia * diastrabajados) * 0.05; 
		total = (pagodedia * diastrabajados) + aumento;
		cout<<"\nEl pago por dias trabajados es: "<<total;
	}else if((diastrabajados > 10 )&&(diastrabajados <=30)){
		aumento = (pagodedia * diastrabajados) * 0.10;
		total = (pagodedia * diastrabajados) + aumento;
		cout<<"\nEl pago por dias trabajados es: "<<total;
	}else {
		cout<<"La cantidad de dias no puede pasar de 20";
	}

}
    	
	
	
	
	
	


