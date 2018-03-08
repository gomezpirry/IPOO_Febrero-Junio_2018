//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

using namespace std;

int main(){
	
	int matriz_A [3] [3] = {{1, 2, 3},
	                        {4, 5, 6},
							{7, 8, 9}};
	

	// OK
	cout<<"Matriz original\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<< matriz_A [i] [j];
		}
		cout<<"\n";
	}
	
	// OK
	cout<<"Matriz Traspuesta\n";
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<matriz_A [j] [i];
		}
		cout<<"\n";
	}
	
	return 0;
}
