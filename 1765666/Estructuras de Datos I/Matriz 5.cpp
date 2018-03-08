//-------------------------------------------------
//   Calificación: 0.0
//
// * No calcula la traspuesta
//--------------------------------------------------

#include <iostream>
#include<string>

using namespace std;

int main(){

 int matriz_A [4] [4] = {{23, 5, 3,4},
                         {5, 6, 7,8},
                         {9, 145, 11,12},
                         {23,33,54,16}};

 cout<<"Matriz\n";
 for(int g = 0; g < 4; g++){
  for(int b = 0; b < 4; b++){
   cout<< matriz_A [g] [b];
  }
  cout<<"\n";
 }

 cout<<"\nMatriz Traspuesta\n"; // Esta comentado no va a ejecutar
 //for(int g = 0; g < 4; g++){
  //for (int b = 0; b < 4; b++){
   cout<<matriz_A [b] [g]; 
  }
  cout<<"\n";
 }

 return 0;
}
