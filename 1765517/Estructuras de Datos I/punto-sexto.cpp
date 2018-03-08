//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------


   #include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int fil1,col1;
    int fil2,col2;




    cout << "Cuantas filas desea en la matriz 1" << endl;
    cin>>fil1;
    cout << "Cuantas columnas desea" << endl;
    cin>>col1;
    int matriz1[fil1][col1];


    for (int i=0; i<fil1;i++){      /**el for llena la fila y columna  que estan ingresando por pantalla**/
        for (int j=0;j<col1;j++){
            cout << "ingrese el valor "<<i+1<<","<<j+1<<" :"<<endl;
            cin>> matriz1[i][j];
        }
    }

    cout << "Cuantas filas desea en la matriz 2" << endl;
    cin>>fil2;
    cout << "Cuantas columnas desea" << endl;
    cin>>col2;

    int matriz2[fil2][col2];

    for (int i=0; i<fil2;i++){     /**el for llena la fila y columna  que estan ingresando por pantalla**/
        for (int j=0;j<col2;j++){
            cout << "ingrese el valor "<<i+1<<","<<j+1<<" :"<<endl;
            cin>> matriz2[i][j];
        }
    }

    if(col1 != col2 || fil1 != fil2){      /**si la columna 1 y fila 1 son diferentes de la columna 2 y fila 2 saldra del programa por error**/
        cout<< "tamano de matrices inavlido \n\n";
        exit (EXIT_FAILURE);
    }

    system("clear");
    int opcion;

    //// Hay redundancia de codigo. Puedes mostrar la matriz1 y matriz2 antes del switch
    do{
        system("clear");
        cout << "\nCALCULO \n\ningrese la opcion \n";
        cout << "-> 1 sumar matrices \n-> 2 lrestar matrices \n-> 0 salir \n==>";
        cin >> opcion;


           switch(opcion){
                  case 1:{
                      cout<< "\nmatriz1" <<endl;
                      for (int i=0; i<fil1;i++){
                        for (int j=0;j<col1;j++){
                            cout << matriz1[i][j] << "  ";
                        }
                        cout <<endl;
                      }
                      cout<<"\nmatriz2"<<endl;
                       for (int i=0; i<fil2;i++){
                        for (int j=0;j<col2;j++){
                            cout << matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                     cout<<"\nsuma de matrices"<<endl;
                      for (int i=0; i<fil1;i++){
                        for (int j=0;j<col2;j++){
                            cout << matriz1[i][j] + matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                  }
                  system("pause");
                  break;

                  case 2:{
                      cout<< "\nmatriz1" <<endl;
                      for (int i=0; i<fil1;i++){
                        for (int j=0;j<col1;j++){
                            cout << matriz1[i][j] << "  ";
                        }
                        cout <<endl;
                      }
                      cout<<"\nmatriz2"<<endl;
                       for (int i=0; i<fil2;i++){
                        for (int j=0;j<col2;j++){
                            cout << matriz2[i][j] << "  ";
                        }
                        cout <<endl;
                      }

                     cout<<"\nresta  de matrices"<<endl;
                      for (int i=0; i<fil1;i++){
                        for (int j=0;j<col2;j++){
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
