//-------------------------------------------------
//   Calificación: 1.25
//
//--------------------------------------------------

#include <iostream>
#include <conio.h>
using namespace std;

void leerTeclas(int* caracteres){
    int contador=0;
    cout<<"presione las 5 teclas: \n";
    while(contador < 5) {
        int caracter = getch();
        if(caracter == 0 || caracter == 224) // Las teclas de direccion manejan dos caracteres
        continue;

        caracteres[contador] = caracter;
        contador++;
    }
}

void tranformarAString(string* teclas,int caracteres[]){
    char letraChar;
    string letraString;
    for(int i=0; i<5; i++){
        switch(caracteres[i]){
        case 72:
            letraString = "UP";
            teclas[i]=letraString;
            break;
        case 80:
            letraString = "DOWN";
            teclas[i]=letraString;
            break;
        case 75:
            letraString = "LEFT";
            teclas[i]=letraString;
            break;
        case 77:
            letraString = "RIGHT";
            teclas[i]=letraString;
            break;
        default:
            letraChar = caracteres[i];
            letraString = toupper(letraChar);
            teclas[i]=letraString;
            break;
        }
    /**esto mustra por pantalla la teclas digitadas*/
      //cout <<teclas[i]<<endl;
    }
}

string claves[7][7]={{"VIDA","UP","DOWN","LEFT","RIGHT","A"},
					{"ARMAS","LEFT","RIGHT","A","X","Y"},
					{"MUNICION","DOWN","UP","RIGHT","LEFT","B"},
					{"REVIVIR","UP","DOWN","X","Y","B"},
					{"MIL VIDAS","UP","DOWN","LEFT","RIGHT","R"},
					{"CARROS","A","B","X","Y","R"},
					{"INVENCIBLE","UP","UP","DOWN","DOWN","LEFT"}};

string verificarClave(string* caracteresString){
	string clave= "Clave no existe";
	for ( int i=0; i<7; i++){
		bool coinciden=true;
		for ( int j=0; j<5 ; j++){
			bool eval = caracteresString[j]!=claves[i][j+1];
			if (eval){
			coinciden=false;
			break ;
		}
	}
	if(coinciden){
		clave=claves[i][0];
		break;
	}
}
return clave ;
}

int main()
{
    int caracteres[5];
    string letras [5];

    leerTeclas(caracteres);
    tranformarAString(letras,caracteres);
    string clave = verificarClave(letras);
    cout <<"esta clave es la de: "<<clave<<endl;


}
