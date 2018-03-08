//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	int matriz_A [3] [3] = {{3, 1, 6},
	                        {2, 1, 1},
							{1, 6, 8}};
	
	// OK
	cout<<"Matriz original\n";
	for(int i = 0; i < 3; i++){
		for(int a = 0; a < 3; a ++){
			cout<< matriz_A [i] [a];
		}
		cout<<"\n";
	}
	
	// OK
	cout<<"Matriz Traspuesta\n";
	for(int i = 0; i < 3; i++){
		for (int d = 0; d < 3; d++){
			cout<<matriz_A [d] [i];
		}
		cout<<"\n";
	}
	
	return 0;
}
