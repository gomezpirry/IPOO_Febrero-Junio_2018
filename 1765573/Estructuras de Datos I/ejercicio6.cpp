//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

/*Se requiere realizar un programa que realice las operaciones de
suma y resta sobre una matriz A y una matriz B. Ambas matrices deben tener la misma
dimensi�on (mismas filas y columnas en A y B) y se realiza la suma o resta componente
a componente.El programa debe validar que las matrices tengan las mismas dimensiones sino debe
mostrar un mensaje de error y salir del programa. Use esta instrucci�on para salir
(exit(EXIT FAILURE);). Para calcular el tama�no de las filas y las columnas use las
siguientes instrucciones:

*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int fila1,columna1;
    int fila2,columna2;




    cout << "Cuantas filas desea en la matriz 1: " << endl;
    cin>>fila1;
    cout << "Cuantas columnas  la matriz 1: " << endl;
    cin>>columna1;
    int matriz1[fila1][columna1];


    for (int i=0; i<fila1;i++){     
        for (int j=0;j<columna1;j++){
            cout << "ingrese el valor "<<i+1<<","<<j+1<<" :"<<endl;
            cin>> matriz1[i][j];
        }
    }

    cout << "Cuantas filas desea en la matriz 2" << endl;
    cin>>fila2;
    cout << "Cuantas columnas desea" << endl;
    cin>>columna2;

    int matriz2[fila2][columna2];

    for (int i=0; i<fila2;i++){    
        for (int j=0;j<columna2;j++){
            cout << "ingrese el valor "<<i+1<<","<<j+1<<" :"<<endl;
            cin>> matriz2[i][j];
        }
    }

    if(columna1 != columna2 || fila1 != fila2){      
        cout<< "tamano de matrices inavlido \n\n";
        exit (EXIT_FAILURE);
    }

    system("clear");
    int opcion;
    do{
        system("clear");
        cout << "\nCALCULO \n\ningrese la opcion \n";
        cout << "-> 1 sumar matrices \n-> 2 lrestar matrices \n-> 0 salir \n==>";
        cin >> opcion;


           switch(opcion){
                  case 1:{
                      cout<< "\nmatriz1" <<endl;
                      for (int i=0; i<fila1;i++){
                        for (int j=0;j<columna1;j++){
                            cout << matriz1[i][j] << "  ";
                        }
                        cout <<endl;
                      }
                      cout<<"\nmatriz2"<<endl;
                       for (int i=0; i<fila2;i++){
                        for (int j=0;j<columna2;j++){
                            cout << matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                     cout<<"\nsuma de matrices"<<endl;
                      for (int i=0; i<fila1;i++){
                        for (int j=0;j<columna2;j++){
                            cout << matriz1[i][j] + matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                  }
                  system("pause");
                  break;

                  case 2:{
                      cout<< "\nmatriz1" <<endl;
                      for (int i=0; i<fila1;i++){
                        for (int j=0;j<columna1;j++){
                            cout << matriz1[i][j] << "  ";
                        }
                        cout <<endl;
                      }
                      cout<<"\nmatriz2"<<endl;
                       for (int i=0; i<fila2;i++){
                        for (int j=0;j<columna2;j++){
                            cout << matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                     cout<<"\nresta  de matrices"<<endl;
                      for (int i=0; i<fila1;i++){
                        for (int j=0;j<columna2;j++){
                            cout << matriz1[i][j] - matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                  }
                  system("pause");
                  break;
           }


    }while(opcion !=0);

    return 0;
}
