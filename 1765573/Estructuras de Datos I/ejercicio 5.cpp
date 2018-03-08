//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------


/* Realice un programa que calcule la matriz traspuesta At de una
matriz A. En una matriz traspuesta el elemento aji de la matriz original A se convertir�a
en el elemento aij de la matriz At
. Una vez calculada mu�estrela en pantalla.

*/
#include <iostream>
#include <string>




using namespace std;


int main(){
	
	int A1[2][2];
	
	 for(int i=0; i<2;i++){
	  for(int j=0;j<2;j++){
	   cout<<"Digite un numero: \n ["<<i<<"]["<<j<<"]: ";
	    cin>>A1[i][j];
      }


    }
    // OK
    cout<<"\nMatriz Original: \n ";
     for(int i=0; i<2;i++){
	  for(int j=0;j<2;j++){
	  	cout<<A1[i][j];
	   }
	  cout<<"\n";
    }

	// OK
    cout<<"\nMatriz transpuesta: \n ";
      for(int i=0; i<2;i++){
	   for(int j=0;j<2;j++){
	  	cout<<A1[j][i];
	    }
       cout<<"\n";
    }
	
	
	return 0;
}
