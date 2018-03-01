//------------------------------------------
//------ Calificación 0.6
//
// * Se solicitan los datos y se calcula el valor del salario
//------------------------------------------


#include<iostream>

using namespace std;

int main(){


 int n1, n2;


 cout <<"cuantos a�os de trabajo: ";
 cin>>n1;

 cout<<"cuantos Dias al mes: ";
 cin>>n2;

//// El sistema debe solicitar el valor del salario (solo calcula para 700)
	/* int salario;
		cin >> salario;
		/// En lugar de 700 poner salario

	*/
 if(n1 >= 10){
  if((n2 >= 10)&&(n2 <= 20))
  cout<< (700*0.15)+700;
  else if((n2 > 20)&&(n2 <= 30))
   cout<< (700*0.20)+700;
  else
   cout<< (700*0.10)+700;
 }
 else if ((n1 < 10)&&(n1 >= 5)){
  if((n2 >= 10)&&(n2 <= 20))
   cout<< (700*0.12)+700;
    else if((n2 > 20)&&(n2 <= 30))
     cout<< (700*0.17)+700;
    else
     cout<< (700*0.7)+700;
 }
 else if ((n1 < 5)&&(n1 > 3)){
  if((n2 >= 10)&&(n2 <= 20))
   cout<< (700*0.10)+700;
    else if((n2 > 20)&&(n2 <= 30))
     cout<< (700*0.15)+700;
    else
     cout<< (700*0.5)+700;
 }
 else if (n1 <=3){
  if((n2 >= 10)&&(n2 <= 20))
   cout<< (700*0.8)+700;
    else if((n2 > 20)&&(n2 <= 30))
     cout<< (700*0.13)+700;
    else
     cout<< (700*0.3)+700;
 }
 else{
  cout<<700;
 }

return 0;

}
