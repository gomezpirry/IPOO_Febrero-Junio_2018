//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int diasTrabajados, total, aumento, totalSalario, salario = 781000, pagoDia = 25000, tiempoEmpresa;
	
	cout<<"Ingrese el timepo que lleva  trabajando en la empresa: ";cin>>tiempoEmpresa;
	
	// OK
	if (tiempoEmpresa > 10){
		aumento = salario * 0.10;
		total = salario + aumento;
		cout<<"\El salario del trabajador es: "<<total;
	}else if ((tiempoEmpresa < 10)&&(tiempoEmpresa > 5)){
		aumento = salario * 0.07;
		total = salario + aumento;
		cout<<"\El salario del trabajador es: "<<total;	
	}else if ((tiempoEmpresa < 5)&&(tiempoEmpresa > 3 )){
		aumento = salario  * 0.05;
		total = salario + aumento;
		cout<<"\El salario del trabajador es: "<<total;
	}else {
		aumento = salario * 0.03;
		total = salario + aumento;
		cout<<"\El salario del trabajador es: "<<total;
		
	}
	
	// OK
	cout<<"\n\Ingrese los dias trabajados: ";cin>>diasTrabajados;
	
	if ((diasTrabajados > 10 )&&(diasTrabajados < 20)){
		aumento = (pagoDia * diasTrabajados) * 0.05;
		total = (pagoDia * diasTrabajados) + aumento;
		cout<<"\El pago por dias trabajados es: "<<total;
	}else if((diasTrabajados > 10 )&&(diasTrabajados <=30)){
		aumento = (pagoDia * diasTrabajados) * 0.10;
		total = (pagoDia * diasTrabajados) + aumento;
		cout<<"\El pago por dias trabajados es: "<<total;
	}else {
		cout<<"La cantidad de dias no puede superar el 20";
	}

}
