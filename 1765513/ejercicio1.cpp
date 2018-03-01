//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include<iostream>
#include<string>

using namespace std;

int main(){

	int i,numero, cont =  0;

	// OK
	cout<<"Digite un numero\n";cin >> numero;

	for(i=1;i<=numero;i++)
		if(numero%i==0)
			cont++;

	// OK
  	if(cont>2)
	   cout<<"no es numero primo";

   	else
	   cout<<"es numero primo";
}






