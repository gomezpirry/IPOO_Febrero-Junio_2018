///// Archivo Incorrecto

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	char frase [100];
	int a=0,e=0,li=0,o=0,u=0;
	
	cout<<"ingresa frase:";
	cin.getline(frase,100,'\n');
	
	for (int i=0;i<100;i++){
		switch (frase[i]){
			case 'a': a++;break;
			case 'e': e++;break;
			case 'i': li++;break;
			case 'o': o++;break;
			case 'u': u++;break;
		}
	}
	cout<<"vocal a:"<<a<<endl;
	cout<<"vocal e:"<<e<<endl;
	cout<<"vocal i:"<<li<<endl;
	cout<<"vocal o:"<<o<<endl;
	cout<<"vocal u:"<<u<<endl;
	
	return 0;
}

