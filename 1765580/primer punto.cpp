//------------------------------------------
//------ Calificación 0.6
//
//------------------------------------------

/*1. Realice un programa que reciba un valor entero entre 0 y 100 por consola e imprima si
ese valor es un numero primo o no (Pista: Utilice el residuo para calcular los m�ultiplos).*/

#include <iostream>

using namespace std;

void calcularPrimo(int numero){
    int contador=0;

    for(int i=1; i<=numero; i++){
        if((numero % i) == 0){
            contador++;
        }
    }

    if(contador == 2){
        cout << " \2 SOY UN PRIMO \n";  /// Error en la secuencia de escape (\2 es invalido)
    }
    else {
            cout<<"\1 NO SOY PRIMO \n"; /// Error en la secuencia de escape (\1 es invalido)
    }
}

int main()
{
    cout << " dijite un numero: ";
    int numero;
    cin >> numero;
    calcularPrimo(numero);
    return 0;
}
