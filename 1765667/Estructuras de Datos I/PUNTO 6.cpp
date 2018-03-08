//-------------------------------------------------
//   Calificación: 0.8
//
// * No valida que tengan las mismas dimensiones
//--------------------------------------------------

#include <iostream>

using namespace std;

int main (){
	
	int matriz_a [3] [4] = {{5, 3, -9, 7},
	                        {-2, 7, 6, 10},
							{3, 9, 5, 2}};
    
	int matriz_b [3] [4] = {{8, 4, 6, 1},
	                        {1, 9, -2, 6},
							{3, 10, 8, 3}};
	
	int suma, resta;
	
	
	if (sizeof (matriz_a) == sizeof(matriz_b)){ /// No necesariamente se cumple esta condicion para que las dimensiones sean iguales una matriz de 3x4 tiene el mismo tamaño de una de 4x3
	
    cout<<"******SUMA DE MATRICES*******\n";						
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			suma = matriz_a[i][j] + matriz_b [i][j];
			
			cout<<"  "<<suma;
		}
		cout<<"\n";
	}
	
	cout<<"******RESTA DE MATRICES*******\n";
		for (int i = 0; i < 3; i++){
		    for (int j = 0; j < 4; j++){
			resta = matriz_a[i][j] - matriz_b [i][j];
			
			cout<<"  "<<resta;
		}
		cout<<"\n";
	}
}else {
	exit;
}
	return 0;
}
