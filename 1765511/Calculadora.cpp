//------------------------------------------
//------ Calificación 0.71
//
// * Revisa ortografia
//------------------------------------------

#include <iostream>

using namespace std;
int main(){
	

	float numero1,numero2,suma,resta,multiplicacion,division,porcentaje;
	char menu;
	



	do {
		cout<<"\n----------------------SELECIONE UNA OPERACION, RECUERDA USAR MAYUSCULA--------------------------"<<endl;
	
		cout<<"\nSuma=(S)"<<endl;
	    cout<<"\nResta=(R)"<<endl;
	    cout<<"\nMultiplicasion=(M)"<<endl; /// multiplicación
	    cout<<"\nDividivicion=(D)"<<endl; /// división
	    cout<<"\nprocentaje=(P)"<<endl;
	    cout<<"\nSalir=(X)"<<endl;
	    
		
        cout<<"\nDIJITE LA LETRA SEGUN LA OPERACION QUE DECEA REALIZAR, RECUERDA USAR MAYUSCULA (-_-): ";cin>>menu;
	    system("cls");
	    
		// OK
        switch(menu){
    	  case 'S': cout<<"NUMERO DE SUMA: ";cin>>numero1;
                  cout<<"NUMERO DE SUMA: ";cin>>numero2;
                  suma = numero1 + numero2;
                  cout<<"\nRESULTADO DE LA SUMA: "<<suma;break;
          case 'R': cout<<"NUMERO DE RESTA: ";cin>>numero1;
                  cout<<"NUMERO DE RESTA: ";cin>>numero2;	
                  resta = numero1 - numero2;
                  cout<<"\nRESULTADO DE LA RESTA: "<<resta;break;
		  case 'M': cout<<"NUMERO DE MULTIPLICASION: ";cin>>numero1; // Multiplicación
                  cout<<"NUMERO DE MULTIPLICASION: ";cin>>numero2;	
                  multiplicacion = numero1 * numero2;
                  cout<<"\nRESULTADO DE LA MULTIPLICASION: "<<multiplicacion;break;
		  case 'D': cout<<"NUMERO DE DIVISION: ";cin>>numero1;
                    cout<<"NUMERO DE DIVISION: ";cin>>numero2;	
                    division = numero1 / numero2;
                    cout<<"\nRESULTADO DE LA DIVICION: "<<division<<endl;break; // División
		  case 'P' :cout<<"NUMERO PORCENTAJE: ";cin>>numero1;
                   cout<<"NUMERO POCENTAJE: ";cin>>numero2;	
                   porcentaje = (numero1) * (numero2/100);
                  cout<<"\nRESULTADO DE PORCENTAJE: "<<porcentaje;break;
		  case 'X': exit(0);break;
		
		  default: cout<<"Esta Vercion Solo Ofrece 5 Operaciones";break; // Version
		
	}
	
	
	
	
	
	
	}while (menu != 'X');

	




}








	
