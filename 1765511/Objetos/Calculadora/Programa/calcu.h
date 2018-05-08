#include <iostream>

using namespace std;

class calculadora{
	
	/// No corresponde a los metodos y atributos que hiciste ene el diagrama
	
	/// Falta el archivo .cpp con la implementación de los metodos 
	private:
		int suma;
		int resta;
		int multiplicasion;
		int divicion;
		int total;
		int menu;
		int numero1,numero2;
		int repetir;
		
	
	public:
		//// En este archivo no va esto, debes crear un archivo .cpp para definir la implementacion
	void menuPrincipal(){
			
	do{

	
	system("cls");	
    cout<<"_________________________"<<endl;
	cout<<"CALCULADORA"<<endl;
	cout<<"_________________________"<<endl;
    cout<<" 1)Suma"<<endl;
    cout<<" 2)Resta"<<endl;
    cout<<" 3)Multiplicasion"<<endl;
    cout<<" 4)Divicion"<<endl;
    cout<<" 5)Salir"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"Dijite La Opcion A Realizar:";
    cin>>menu;
    
	cout<<"Dijite La Opcion Que Decea Realizar:"<<endl;
    system("cls");
    
    switch(menu){
    	
    	case 1:
    		
    		cout<<"Dijite El Primer Numero:"<<endl;
    		cin>>numero1;
    		cout<<"Dijite El Segundo Numero:"<<endl;
    		cin>>numero2;
    		
    		suma=numero1+numero2;
    		
    		cout<<"El Resultado Es:"<<suma<<endl;

            break;
    		
    	case 2:
		    
			cout<<"Djite El Primer Numero:"<<endl;
			cin>>numero1;
			cout<<"Dijite El Segundo Numero:"<<endl;
			cin>>numero2;
			
			resta=numero1-numero2;	
    		
    		cout<<"El Resultado Es:"<<resta<<endl;
    		break;
    	case 3:
    		
    		cout<<"Djite El Primer Numero:"<<endl;
			cin>>numero1;
			cout<<"Dijite El Segundo Numero:"<<endl;
			cin>>numero2;
			
			multiplicasion=numero1 * numero2;
			
			cout<<"El Resultado Es:"<<multiplicasion<<endl;
			break;
		case 4:
			
			cout<<"Djite El Primer Numero:"<<endl;
			cin>>numero1;
			cout<<"Dijite El Segundo Numero:"<<endl;
			cin>>numero2;
			
			divicion=numero1 /numero2;
		   	
		    cout<<"El Resultado Es:"<<divicion<<endl;
		    break;
		case 5:
			
			cout<<"***Adios***";
			repetir= false;
		  
		  break;
		    
        
		}system("pause");

	}while(repetir);
}
	};
		
		
		



