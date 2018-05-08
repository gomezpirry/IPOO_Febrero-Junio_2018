#include <iostream>
#include <fstream>

using namespace std;

class cuentaBanco{
	
	private:
	/// No coinciden los atributos y los metodos con lo que se encuentra en el diagrama que hiciste
    int   numeroCuenta;
    int   clave;
    int   saldo = 1000000;
    int   ingreso;
    int   retiro;
    int   menu;
    char  nombre1[20],nombre2[20]; // para que nombre 2
	string usuario;
	
		
	public:
		
	
	/// Esto no va ahi se debe crear un archivo .cpp para indicar 	
	void transaciones(){ 
		
			ofstream entrada;
			entrada.open("Transaciones.txt",ios::out);
			
	cout<<"Dijite Su Usuario:\n\t";
	cin>>usuario;
	if(usuario == "David" ){
	
	cout<<"Dijite Su Clave:\n\t";
	cin>>clave;
	if(clave== 2008){
		system("cls");
	    system("color 2");
        cout<<"1) Ver Saldo\n";
		cout<<"2) Ingresar Saldo\n";
		cout<<"3) Retirar Saldo\n";
		cout<<"4) Salir\n";
		cin>>menu;
		system("cls");
	do{
		
		switch(menu){
			
			case 1:
				
				cout<<"Su Saldo Actual Es:"<<saldo;
			
				break;
				
			     	case 2:
			     		cout<<"Dijite El Nombre De La Operacion A Realizar\n";
			     		cin>>nombre1;
			     		
			     		
						cout<<"Dijite El Saldo A Ingresar\n";
			     		cin>>ingreso;
			     		
			     		ingreso=ingreso+saldo;
					    
					    cout<<"El Saldo En Su Cuenta Es:\n"<<ingreso;
					    
					    entrada<<nombre2<<" "<<ingreso<<endl;
					    entrada.close();
				    	break;
					     
						   case 3:
						   	cout<<"Dijite El Nombre De La Operacion A Realizar:\n";
						   	cin>>nombre2;
						   
						   	
							cout<<"Dijite El Saldo A Retirar\n";
						   	cin>>retiro;
						   	entrada<<nombre2<<" "<<retiro<<endl;
						    entrada.close();
						   	if(retiro < saldo){
						   		
								   retiro=retiro-saldo;
								   cout<<"El Saldo Actual En Su Cuenta Es\n"<<retiro;
							       entrada<<"Saldo Actual"<<" "<<retiro<<endl;
							       entrada.close();  
							   }else{
							   	  cout<<"El Saldo En Su Cuenta No Es Insuficiente\n";
							   }
					 	    
							  break;
							  
							     case 4:
							  	    break;
							  
			
		}
	
	}while(menu > 4);
	
}else{
	cout<<"A Dijitado Mal Su Nombre De Usuario";
}
	
	}else{cout<<"La Contraseña Que Dijito Es Incorrepta";
     }
	
}   
	
		
};
