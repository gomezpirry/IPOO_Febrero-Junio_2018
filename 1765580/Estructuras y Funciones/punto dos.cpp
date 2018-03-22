//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>

 using namespace std;

enum golpes{
m = 50,
p = 100,
e = 150,
r = 200,
ex = 300,
};

int danoRecibido(int energiaInicial, int cantidadGolpes, golpes secuenciaGolpes[]){

    for (int golpe = 0; golpe < cantidadGolpes; golpe++){
        energiaInicial -= secuenciaGolpes[golpe];
    }
return energiaInicial;
}

int main() {
    int energia = 5000;
    golpes secuenciaGolpes[10] = { m, p, e, ex, r, m, ex, p, r, m};
    int golpes = sizeof(secuenciaGolpes)/sizeof(secuenciaGolpes[0]);
    int enegiaRestante = danoRecibido(energia, golpes, secuenciaGolpes);
    cout << "al traje le queda: " << enegiaRestante <<"\n";};
