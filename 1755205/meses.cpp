//------------------------------------------
//------ Calificación 0.3 
//
// * No uso el switch 
//------------------------------------------


/*
 * meses.cpp
 *
 *  Created on: 25/02/2018
 *      Author: sefer
 */

#include <iostream>
#include <string>
using namespace std;

 int main(){


	int numero;
	cout<<"ingrese un numero entre 1 y 12";
	cin>>numero;

	/// Es válido usar if pero aca debes usar el switch
	/*
	switch(numero)
	case 1:
		cout<<"january";
	break;
	case 2:
		cout<<"february";
	break;
	case 3:
		cout<<"march";
	break;
	case 4:
		cout<<"april";
	break;
	case 5:
		cout<<"may";
	break;
	case 6:
		cout<<"june";
	break;
	case 7:
		cout<<"july";
	break;
	case 8:
		cout<<"august";
	break;
	case 9:
		cout<<"september";
	break;
	case 10:
		cout<<"october";
	break;
	case 11:
		cout<<"november";
	break;
    case 12:
		cout<<"december";
	break;
	default:
		cout<<"el numero no corresponde a ningun mes";
	break;
	*/
	if(numero==1)
	{
		cout<<"january";
	}
	else
	{
      if (numero==2)
      {
    	  cout<<"february";
      }
      else
      {
    	  if(numero==3)
    	  {
    		  cout<<"march";
    	  }
    	  else
    	  {
    		  if(numero==4)
    		  {
    			  cout<<"april";
    		  }
    		  else
    		  {
    			  if(numero==5)
    			  {
    				  cout<<"may";
    			  }
    			  else
    			  {
    				  if(numero==6)
    				  {
    					  cout<<"june";
    				  }
    				  else
    				  {
    					  if(numero==7)
    					  {
    						  cout<<"july";
    					  }
    					  else
    					  {
    						  if(numero==8)
    						  {
    							  cout<<"august";
    						  }
    						  else
    						  {
    							  if(numero==9)
    							  {
    								  cout<<"september";
    							  }
    							  else
    							  {
    								  if(numero==10)
    								  {
    									  cout<<"october";
    								  }
    								  else
    								  {
    									  if(numero==11)
    									  {
    										  cout<<"november";
    									  }
    									  else
    									  {
    										  if(numero==12)
    										  {
    											  cout<<"december";
    										  }
    										  else
    										  {
    											  cout<<"el numero no corresponde a ningun mes";
    										  }
    									  }
    								  }
    							  }
    						  }
    					  }
    				  }
    			  }
    		  }
    	  }
      }
	}
}


