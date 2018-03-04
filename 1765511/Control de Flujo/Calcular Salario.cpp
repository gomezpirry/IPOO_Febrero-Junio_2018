//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main ()

{
	                                //CUENTA SALARIO

	int diastrabajo, total, aumento, salario = 781000, diap = 25000, duracionempresa;
	
	// OK
	cout<<"__________DIJITE SU TIEMPO DE TRABAJO EN LA EMPRESA: ";cin>>duracionempresa;
	
	if (duracionempresa> 10){
		aumento = salario * 0.10;
		total = salario + aumento;
		cout<<"\nESTE ES EL SALARIO DE TRABAJO: "<<total;

	}else if ((duracionempresa < 10)&&(duracionempresa > 5)){
		aumento = salario * 0.07;
		total = salario + aumento;
		cout<<"\nESTE ES EL SALARIO DE TRABAJO: "<<total;	

	}else if ((duracionempresa < 5)&&(duracionempresa > 3 )){
		aumento = salario  * 0.05;
		total = salario + aumento;
		cout<<"\nESTE ES EL SALARIO DE TRABAJO: "<<total;

	}else {
		aumento = salario * 0.03;
		total = salario + aumento;
		cout<<"\nESTE ES EL SALARIO DE TRABAJO: "<<total;
		
	}
	
	cout<<"\n\n ________DIJITE DIAS TRABAJADOS: ";cin>>diastrabajo;
	
	/// OK

	if ((diastrabajo > 10 )&&(diastrabajo < 20)){
		aumento = (diap * diastrabajo) * 0.05;
		total = (diap * diastrabajo) + aumento;
		cout<<"\n SALARIO DE DIAS TRABAJADOS: "<<total;
	
	}else if((diastrabajo> 10 )&&(diastrabajo <=30)){
		aumento = (diap * diastrabajo) * 0.10;
		total = (diap * diastrabajo) + aumento;
		cout<<"\nSALARIO DE DIAS TRABAJADOS: "<<total;

	}else {
		
		cout<<"_______RECUERDA QUE LA CATIDAD DE DIAS TRABAJADOS NO DEBE SUPERAR LOS (30)";





	}










}
