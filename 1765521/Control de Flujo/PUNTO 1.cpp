//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>
using namespace std;
int main(){
   int asd=0,iter,numero;

   /// OK
         cout<<"Ingrese numero\n";cin>>numero;
		 for(iter=1;iter<(numero+1);iter++){
         if(numero % iter==0){
             asd++;
            }
         }
         if(asd!=2){
              cout<<"No es un numero primo";
            }else{
                cout<<"Si es un numero primo";
         }
    return 0;
}
