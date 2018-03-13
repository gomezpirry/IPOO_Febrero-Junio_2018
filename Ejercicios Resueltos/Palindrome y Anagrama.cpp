//============================================================================
// Name        : Clase.cpp
// Author      : Augusto Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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

	/// Eliminar espacios y signos de puntuacion de las palabras
	for(size_t i = 0; i < palabra1.size(); i++){
		if(!isblank(palabra1[i]) && !ispunct(palabra1[i]))
			sinEspacios1 += toupper(palabra1[i]);
	}

	for(size_t i = 0; i < palabra2.size(); i++){
		if(!isblank(palabra2[i]) && !ispunct(palabra2[i]))
			sinEspacios2 += toupper(palabra2[i]);
	}

	/// Los valores enteros de las letras del abecedario en mayusculas
	/// van desde A=65 hasta Z=90. Hay 26 letras
	/// calcular repeticiones de una letra
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

	/// verificar que las repeticiones de las letras de la palabra sean iguales
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
