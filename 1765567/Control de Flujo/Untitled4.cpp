//------------------------------------------
//------ Calificación 0.2
//
// * No implemento sentencia switch
// * Cuando termina una operación no vuelve a desplegar el menu
// * La directiva system esta implementada incorrectamente
//------------------------------------------


#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{

// No esta implementado que realice una nueva operación cada vez que termine una 

/// Se debe implementar usando switch el if es valido pero para este tipo de modelo esta diseñado el switch

system(" Calculadora "); //// Esta instruccion es incorrecta (system sirve para ejecutar subprocesos definidos por el sistema)
double X;
{
cout << "Elige la opcion que desea realizar:\n\n Funciones Matematicas\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Porcentaje\n\n";
cin >> X;
if(X == 1){ //Sumar
double sum1, sum2;
cout << "\nEscribe el primer digito: ";
cin >> sum1;
cout << "Escribe el segundo digito: ";
cin >> sum2;
cout << "El resultado de la suma es " << sum1 + sum2 << "\n" << endl;
system("pause>nul"); /// Comando inncesario
}
if(X == 2){ //Restar
double res1, res2;
cout << "\nEscribe el primer digito: ";
cin >> res1;
cout << "Escribe el segundo digito: ";
cin >> res2;
cout << "El resultado de la resta es " << res1 - res2 << endl;
system("pause>nul"); /// Comando inncesario
}
if(X == 3) { //Multiplicar
double mul1, mul2;
cout << "\nEscribe el primer digito: ";
cin >> mul1;
cout << "Escribe el segundo digito: ";
cin >> mul2;
cout << "El resultado de la multiplicacion es " << mul1 * mul2 << endl;
system("pause>nul"); /// Comando inncesario
}
if(X == 4){ //Dividir
double div1, div2;
cout << "\nEscribe el primer digito: ";
cin >> div1;
cout << "Escribe el segundo digito: ";
cin >> div2;
cout << "El resultado de la divisi�n es " << div1 / div2 << endl;
system("pause>nul"); /// Comando inncesario
}
if(X == 5){ //Porcentaje
double por1, por2;
cout << "\nEscribe el digito: ";
cin >> por1;
cout << "Escribe el porcentaje: ";
cin >> por2;
cout << "El porcentaje es " << (por1 * por2)/100 << endl;
system("pause>nul"); /// Comando inncesario
}
}
}
