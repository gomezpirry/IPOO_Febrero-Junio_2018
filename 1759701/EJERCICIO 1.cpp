//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>
using namespace std;
int main(){
   int a=0,i,n;
         cout<<"Ingrese un numero por favor"<<endl;cin>>n;
         
         // OK
		 for(i=1;i<(n+1);i++){
         if(n % i==0){
             a++;
            }
         }

         // OK
         if(a!=2){
              cout<<"ESE NUMERO No es Primo";
            }else{
                cout<<"ESE NUMERO Si es Primo";
         }
    return 0;
}
