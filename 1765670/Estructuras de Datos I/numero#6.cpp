//-------------------------------------------------
//   Calificación: 0.8
//
// * No valida que tengan las mismas dimensiones
//--------------------------------------------------

#include <iostream>

using namespace std;

int main(){


 int matriz_A [3][3]= {{5, 8, -3},
                       {7, -5, 9},
                       {-5, 4, 7}};

 int matriz_B [3][3]= {{-8, 7, 5},
                       {6, -8, 2},
                       {9, 4, -6}};
 
 int suma, resta;
 
 if (sizeof (matriz_A) == sizeof(matriz_B)){ /// No necesariamente se cumple esta condicion para que las dimensiones sean iguales una matriz de 3x4 tiene el mismo tamaño de una de 4x3
	
 	
 	cout<<"matriz de suma\n";
 	
 	for (int i=0; i<3;i++){
 		for (int j=0; j<3;j++){
 			suma= matriz_A [i][j] + matriz_B [i][j];
 			
 			cout<<" "<<suma;
		 }
		 cout<<"\n";
	 }
	 
	 cout<<"matriz de resta\n";
	 
	for (int i=0; i<3;i++){
 		for (int j=0; j<3;j++){
 			resta= matriz_A [i][j] - matriz_B [i][j];
 			
 			cout<<" "<<resta;
 }
       cout<<"\n";
}

}else{
	exit;
}

 
 
 
 
 return 0;
}
