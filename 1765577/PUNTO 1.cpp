//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>

using namespace std;

int main(){
   int a=0,i,n;
         cout<<"Ingrese numero entre 0 y 100\n";cin>>n;
         
         /// OK
		 for(i=1;i<(n+1);i++){
         if(n % i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
    return 0;
}