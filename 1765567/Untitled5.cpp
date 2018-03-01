//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------


#include<iostream>

using namespace std;

int main(){
	int num;
	/// OK
	cout<<"INGRESE EL PUNTAJE:"<<endl;
	cin>>num;
	
	if(num>0 && num<4000){
		cout<<"C"<<endl;
		}
	else if(num>=4001 && num<=7000){
		cout<<"B"<<endl;
		}
	else if(num>=7001 && num<=9000){
		cout<<"A"<<endl;
		}
	else if(num>=9001 && num<=9999){
		cout<<"S"<<endl;
		}
	else if(num==10000){
		cout<<"SA"<<endl;
		}
	else{
		cout<<"no esta en el rango"<<endl;
		}
	
	
	}
