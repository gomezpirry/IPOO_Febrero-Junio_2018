//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>
using namespace std;
int main(){

    // OK
   int a=0,i,n;
         cout<<"Ingrese numero"<<endl;cin>>n;
         
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
