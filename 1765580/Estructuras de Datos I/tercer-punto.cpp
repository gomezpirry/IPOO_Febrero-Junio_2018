//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int opcion;
    int tam1;/**define el tama�o de los arreglos de estudiante y codigo**/
    int tam2;/**define el tama�o de los arreglos de notas(quiz1 quiz2 parcial1 y proyecto)**/
    float nota;
    string estudian;
    int cod;

    /** arreglos para guardar los valores definidos como punteros**/
    string  *estudiante;
    int  *codigo;
    float *quiz1;
    float *quiz2;
    float *parcial;
    float *proyecto;
    float *definitiva;

    do{
    system("cls");
        cout << "\nCALCULO DE NOTAS\n\ningrese la opcion \n";
        cout << "-> 1 crear estudiantes \n-> 2 llenar notas \n-> 3 mostar listado \n-> 0 salir \n==>";
        cin >> opcion;

        switch(opcion){
        case 1:{
            system("cls");
            cout << "ingrese cantidad estudiantes\n=> ";
            cin >> tam1;
            estudiante = new string[tam1]; /**voy asignar a estudiante como un tipo de dato arreglo de string con el tama�o ingresado por panatalla*/
            codigo = new int[tam1];

            system("cls");

            for(int i=0;i<tam1;i++){
                cout << "ingrese nombre de estudiante " << i+1 << ": "; /**el for llena el arreglo de estudiantes y codigo que estan ingresando por pantalla**/
                cin >> estudian;
                estudiante[i]=estudian;
                cout << "\ningrese codigo de estudiante: " << i+1 << ": ";
                cin>>cod;
                codigo[i]=cod;
                system("cls");

            }
            system("pause");
        }
            break;

        case 2:{
            system("cls");
            cout << "+debe ingresar una nota entre 0.0 y 5.0\n\n";
            cout << "+debe indicar la cantidad de alumnos a los que se asignaran notas\n\n";
            system("pause");
            system("cls");

            cout << "ingrese cantidad estudiantes  a los que se asignaran notas\n=> ";/**el tama�o de lasnotas de be ser igual al tama�o de los estudiantes y codigos**/
            cin >> tam2;

            if(tam1 != tam2){
                cout <<"numero de estudiantes inexistententes \nsaliendo del programa";
                exit (EXIT_FAILURE);
            }

            quiz1= new float[tam2];
            quiz2= new float[tam2];
            parcial= new float[tam2];
            proyecto= new float[tam2];

            system("cls");

            for(int i=0;i<tam2;i++){
                cout << " ingrese las nota para el alumno " << estudiante[i] << "\n\n ";
                cout << "quiz 1 = ";
                cin >> nota;
                cout << endl;
                while(nota<0.0 || nota > 5.0){
                     cout << "nota invalida ingrese nuevamente \n ->";
                     cin >> nota;
                }
                quiz1[i]=nota;

                cout << "quiz 2 = ";
                cin >> nota;
                cout << endl;
                while(nota<0.0 || nota > 5.0){
                     cout << "nota invalida ingrese nuevamente \n ->";
                     cin >> nota;
                }
                quiz2[i]=nota;

                cout << "parcial = ";
                cin >> nota;
                cout << endl;
                while(nota<0.0 || nota > 5.0){
                     cout << "nota invalida ingrese nuevamente \n ->";
                     cin >> nota;
                }
                parcial[i]=nota;

                cout << "proyecto = ";
                cin >> nota;
                cout << endl;
                while(nota<0.0 || nota > 5.0){
                     cout << "nota invalida ingrese nuevamente \n ->";
                     cin >> nota;
                }
                proyecto[i]=nota;

                system("cls");
            }
            system("pause");
        }
            break;
        case 3:{
            system("cls");

            cout << "calculando definitivas... \n";
            definitiva = new float[tam1];
            for(int i=0; i<tam1; i++){
                definitiva[i] =(proyecto[i]*0.4)+(parcial[i]*0.35)+(((quiz1[i]+quiz2[i])/2)*0.25);
            }
            cout << "definitivas calculadas \n";
            system("pause");
      system("cls");
            cout << "\n***** LISTA ESTUDAINTES ******\n";
            cout << "CODIGO     NOMBRE      QUIZ1   QUIZ2   PARCIAL     PROYECTO    DEFINITIVA\n";
            for(int i=0;i<tam1;i++){
                    cout << codigo[i] <<"         "<<estudiante[i]<<"         ";
                    cout << quiz1[i] <<"         "<<quiz2[i]<<"         ";
                    cout << parcial[i] <<"         "<<proyecto[i]<<"         ";
                    cout << definitiva[i] <<endl;
            }
            cout << endl;
            system("pause");
        }
            break;
        default:
            cout << "SALIENDO ...";
            break;
        }
    }while(opcion!=0);
    return 0;
}


