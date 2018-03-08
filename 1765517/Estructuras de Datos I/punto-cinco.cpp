//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
    int fil,col;

    cout << "Cuantas filas desea en la matriz" << endl;
    cin>>fil;
    cout << "Cuantas columnas desea" << endl;
    cin>>col;

/// OK pero no es recomendable usar variables para definir arreglos
    int mati[fil][col];
    int matitrans[col][fil];

    for (int i=0; i<fil;i++){
        for (int j=0;j<col;j++){
            cout << "ingrese el valor "<<i+1<<","<<j+1<<" :"<<endl;
            cin>> mati[i][j];
        }
    }

    cout << "\n matriz original \n ";
    for (int i=0; i<fil;i++){
        for (int j=0;j<col;j++){
            cout << mati[i][j] << "  ";
        }
        cout <<endl;
    }

    cout << "\n matriz transpuesta \n ";
    for (int i=0; i<col;i++){
        for (int j=0;j<fil;j++){
            matitrans[i][j]= mati[j][i];
            cout << matitrans[i][j] << "  ";
        }
        cout <<endl;
    }


    return 0;
}
