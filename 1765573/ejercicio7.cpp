//------------------------------------------
//------ Calificación 0.35
//
//------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main(){



	int diasT;
	int antiguedad;
	float sueldoN;
	float  sueldoV;
	float valorD= 0;

	cout<<"\nDigitar los dias de trabajo: ";
	cin>>diasT;

	cout<<"\nDigitar el precio por dia de trabajo: ";
	cin>>valorD;

	cout<<"\nDigitar los a�os de antiguedad: ";
	cin>>antiguedad;

//// Falta calcular los bonificaciones de acuerdo a los dias trabajados

	sueldoV = diasT * valorD;

   if(antiguedad >= 10) {
		 sueldoN = (sueldoV * 0.10) + sueldoV;
		cout<<"su nuevo sueldo es: "<<sueldoN;

	}
	 else if (antiguedad >= 5) {
			 sueldoN = (sueldoV * 0.07) + sueldoV;
			cout<<"su nuevo sueldo es: "<<sueldoN;

		}



	 else if (antiguedad >= 3){
				sueldoN = (sueldoV * 0.05) + sueldoV;
				cout<<"su nuevo sueldo es: "<<sueldoN;

			}

	 else if (antiguedad >= 0) {
				sueldoN = (sueldoV * 0.03) + sueldoV;
				cout<<"su nuevo sueldo es: "<<sueldoN;






		 return 0;

	            }



    }




