//Unos ejemplos de palindrome son reconocer, anilina, amar da drama, A mam´a, Roma le aviva el amor
//a pap´a y a pap´a, Roma le aviva el amor a Mam´a.
// Escriba un programa que reciba una palabra o frase y retorne si la palabra o no

//primero hay que definir unos numeros y letras
//abrir un strint con la palabra sin que lleve espacio, abrir un for sin espacio
//un int al inicio y al final para que retorne false o true al final
/// luego Eliminar espacios y signos de puntuacion de las palabras
/// Los valores enteros de las letras del abecedario en mayusculas
// van desde A=65 hasta Z=90. Hay 26 letras
// calcular repeticiones de una letra y por ultimo 
// verificar que las repeticiones de las letras de la palabra sean iguales


//a continuacion el codigo de el programa
#include <iostream>
#include <cctype>
using namespace std;

#define NUM_LETRAS 26

///----------------------------------------------------------------
/// --------------------- Palindrome  -----------------------------
///----------------------------------------------------------------

bool palindrome(string palabra){

	string sinEspacios = "";
	for(size_t i = 0; i < palabra.size(); i++){
		if(!isblank(palabra[i]) && !ispunct(palabra[i]))
			sinEspacios += toupper(palabra[i]);
	}

	int inicio = 0;
	int final = sinEspacios.size() - 1;
	while (inicio < final) {
		if (sinEspacios[inicio]!=sinEspacios[final])
			return false;
		inicio++;
		final--;
	}
	return true;

}

bool anagrama(string palabra1, string palabra2){

	string sinEspacios1 = "";
	string sinEspacios2 = "";

	
	for(size_t i = 0; i < palabra1.size(); i++){
		if(!isblank(palabra1[i]) && !ispunct(palabra1[i]))
			sinEspacios1 += toupper(palabra1[i]);
	}

	for(size_t i = 0; i < palabra2.size(); i++){
		if(!isblank(palabra2[i]) && !ispunct(palabra2[i]))
			sinEspacios2 += toupper(palabra2[i]);
	}


	int repetidas1[NUM_LETRAS] = {};
	int repetidas2[NUM_LETRAS] = {};

	for(size_t i = 0; i < sinEspacios1.size(); i++){
		int letra = sinEspacios1[i];
		repetidas1[letra - 65]++;
	}

	for(size_t i = 0; i < sinEspacios2.size(); i++){
		int letra = sinEspacios2[i];
		repetidas2[letra - 65]++;
	}

	for(int i = 0; i < NUM_LETRAS; i++){
		char c = i + 65;
		printf("%c: %d - %d\n", c, repetidas1[i], repetidas2[i]);

	}

	
	for(int i = 0; i < NUM_LETRAS; i++){
		if(repetidas1[i] != repetidas2[i])
			return false;
	}

	return true;
}

int main() {

	cout << "\n----palindrome---------\n";
	string palabra = "A mama, roma le aviva el amor a papa y a papa, roma le aviva el amor a mama";
	if(palindrome(palabra)){
		cout << "Es palindrome\n";
	}
	else{
		cout << "No es palindrome\n";
	}


	cout << "\n----anagramas---------\n";
	string anagrama1 = "anagramas";
	string anagrama2 = "a ganar mas";

	if(anagrama(anagrama1, anagrama2)){
		cout << "Son anagramas\n";
	}
	else{
		cout << "No son anagramas\n";
	}

	system("pause");
}
