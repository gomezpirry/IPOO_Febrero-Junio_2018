//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>
#include<string>

using namespace std;

int main(){

	int matriz_A [4] [4] = {{1, 2, 3,4},
	                        {5, 6, 7,8},
							{9, 10, 11,12},
	                        {13,14,15,16}};

	cout<<"Matriz\n";
	// OK
	for(int f = 0; f < 4; f++){
		for(int c = 0; c < 4; c++){
			cout<< matriz_A [f] [c];
		}
		cout<<"\n";
	}
 // OK
	cout<<"Matriz Traspuesta\n";
	for(int f = 0; f < 4; f++){
		for (int c = 0; c < 4; c++){
			cout<<matriz_A [c] [f];
		}
		cout<<"\n";
	}

	return 0;
}
