//-------------------------------------------------
//   Calificación: 1.1
//
// * error al acceder a los valores del arreglo de 2 dimensiones
//--------------------------------------------------

#include <iostream>

using namespace std;


int main(){
	int matriz_a [3][3]= {{2,3,4},
                         {3,1,2},
                         {5,2,2}};
    cout<<"Matrix Original\n";
	for(int ent=0;ent<3;ent++)
	{
		for(int vet=0;vet<3;vet++)
		{
			cout<<matriz_a [ent][ent]; /// Si ent y vet no tienen el mismo valor se genera un error
		}
		cout<<"\n";
	}
	
	// OK
	cout<<"Matriz Trampuesta\n";
	for(int ent=0;ent< 3; ent++){
		for(int het=0;het< 3;het++){
			cout<<matriz_a [het][ent];  
		}
		
		cout<<"\n";
		
	}
	
	return 0;  						
}
