//------------------------------------------
//------ Calificación 0.35
//
// * Falto desplegar de nuevo el menu al realizar una operación
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	int pos,n1,n2, resultado;
	
cout<<"elije una opcion"<<endl;
cout<<"1 suma"<<endl;
cout<<"2 resta"<<endl;
cout<<"3 multiplicacion"<<endl;
cout<<"4 division"<<endl;
cout<<"5 porcentaje"<<endl;	

cin>>pos;
// Te falto implementar que cada vez que se realice una operación vuelva a desplegar el menu
switch(pos){
	
	case 1:
		cout<<"\n  SUMA"<<endl;
		cout<<"ingrese los numeros a sumar"<<endl;
		cout<<"primer numero";
		cin>>n1;
		cout<<"segundo numero";
		cin>>n2;
		
		resultado=n1+n2;
		cout<<"\n resultado:"<<resultado<<endl;
		break;
		
	case 2:
		cout<<"\n  RESTA"<<endl;
		cout<<"ingrese los numeros a restar"<<endl;
		cout<<"primer numero";
		cin>>n1;
		cout<<"segundo numero";
		cin>>n2;
		
		resultado=n1-n2;
		cout<<"\n resultado:"<<resultado<<endl;	
		break;
		
	case 3:
		cout<<"\n  MULTIPLICACION"<<endl;
		cout<<"ingrese los numeros a multiplicar"<<endl;
		cout<<"primer numero";
		cin>>n1;
		cout<<"segundo numero";
		cin>>n2;
		
		resultado=n1*n2;
		cout<<"\n resultado:"<<resultado<<endl;	
		break;

	case 4:
		cout<<"\n  DIVISION"<<endl;
		cout<<"ingrese los numeros a division"<<endl;
		cout<<"primer numero";
		cin>>n1;
		cout<<"segundo numero";
		cin>>n2;
		
		resultado=n1/n2;
		cout<<"\n resultado:"<<resultado<<endl;	
		break;
	
	case 5:
		cout<<"\n  PORCENTAJE"<<endl;
		cout<<"ingrese los numeros a porcentaje"<<endl;
		cout<<"primer numero";
		cin>>n1;
		cout<<"segundo numero";
		cin>>n2;
		
		resultado=n2*(n1/100); // el porcentaje se calcula al reves (n1) * (n2/100)
		cout<<"\n resultado:"<<resultado<<endl;	
		break;
		
	default:
	    cout<<"\nopcion no valida";
		break;
		
					
}
}
	
