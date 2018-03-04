//------------------------------------------
//------ Calificación 0.71
//
//------------------------------------------

#include <iostream>
using namespace std;
int main(){
   
   /// OK
   int ent=0,imp,num;
         cout<<"digite un numero"<<endl;cin>>num;
         
		 for(imp=1;imp<(num+1);imp++){
         if(num % imp==0){
             ent++;
            }
         }
         if(ent!=2){
              cout<<"Es Primo";
            }else{
                cout<<"No Es Primo";
         }
    
	
	return 0;}
