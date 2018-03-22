//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

using namespace std;

/*float----------------------------------------------*/
float MayorMenor(float array[],int n, bool m=true){
		float valor=0;
		valor=array[0];
			if(m==true){
		        for(int i=1; i<n; i++){
					if(array[i]>valor){
						valor=array[i];
						}
				}
			}
			if(m==false){
			for(int i=1; i<n; i++){
					if(array[i]<valor){
						valor=array[i];
						}
				}
			}
				return valor;
	}

int MayorMenor(int array[],int n, bool m=true){
		int valor=0;
		valor=array[0];
			if(m==true){
		        for(int i=1; i<n; i++){
					if(array[i]>valor){
						valor=array[i];
						}
				}
			}

		if(m==false){
			for(int i=1; i<n; i++){
					if(array[i]<valor){
						valor=array[i];
						}
				}
			}
				return valor;
	}




	int main(){

	int n= 10;
	float miarreglito[n]={1.5,4.5,7.8,6.8,1.2,9.8,3.2,6.5,7.2,8.4};

	int miarreglo[n]={1,4,5,6,11,-9,3,12,7,8};




int op;
do{
    cout<<"mayor o menor\n";
    cout<<"ingrese 1  para el mayor  2 y 0 par salir";
    cin>>op;
    switch(op){
        case 1:
        cout<< MayorMenor(miarreglito,n,true);
        break;
        case 2:
        cout<<MayorMenor(miarreglito,n,false);
        break;
    }
    }while(op!=0);

}

