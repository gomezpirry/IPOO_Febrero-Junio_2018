//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

using namespace std;

struct Estudiante{
    string nombre;
    int codigo;
    float quiz1;
    float quiz2;
    float parcial;
    float proyecto;
    float finall;
};

void mostrarEstudiantes(Estudiante arreglo[], int s){
    cout <<"Nombre\t" << "Codigo\t" << "Quiz1\t" << "Quiz2\t" <<"Parcial\t"<< "proyecto\t"<<"final\n";
    for(int i=0;i<s; i++){
            cout << arreglo[i].nombre << "\t" << arreglo[i].codigo <<"\t"<< arreglo[i].quiz1 << "\t" << arreglo[i].quiz2 <<"\t"
            << arreglo[i].parcial << "\t" << arreglo[i].proyecto <<"\t" << arreglo[i].finall <<"\n";
    }
}

void calcularNotas(Estudiante arreglo[], int s){
    for(int i=0;i<s; i++){
        arreglo[i].finall=(((arreglo[i].quiz1+arreglo[i].quiz2)/2)*0.25)+(arreglo[i].parcial*0.35)+(arreglo[i].proyecto*0.4);
    }
}

int main(){
    int cantidad;
    cout<<"ingrese la cantidad de estudiantes: ";
    cin>> cantidad;

    const int size = cantidad;
    Estudiante estudiante[cantidad];
    for(int i=0; i< cantidad; i++){
        cout<<"ingrese el nombre ";
        cin>>estudiante[i].nombre;
        cout<<"\n";
        cout<<"ingrese el codigo ";
        cin>>estudiante[i].codigo;
        cout<<"\n";
        cout<<"ingrese el quiz1 ";
        cin>>estudiante[i].quiz1;
        cout<<"\n";
        cout<<"ingrese el quiz2 ";
        cin>>estudiante[i].quiz2;
        cout<<"\n";
        cout<<"ingrese el parcial ";
        cin>>estudiante[i].parcial;
        cout<<"\n";
        cout<<"ingrese el proyecto ";
        cin>>estudiante[i].proyecto;
    }
    calcularNotas(estudiante,cantidad);
    mostrarEstudiantes(estudiante,cantidad);
}
