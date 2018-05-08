#include "poderes.h"

poderes::poderes()
{
}

poderes::~poderes()
{
}


void poderes::darElemento(string elemento) {
	this->elemento = elemento;
}

string poderes::obtenerElemento() {
	return elemento;
}



void poderes::darConsumoKi(float consumoKi) {
	this->consumoKi = consumoKi;
}

float poderes::obtenerConsumoKi() {
	return consumoKi;
}




void poderes::darMenosPoder(float menosPoder) {
	this->menosPoder = menosPoder;
}

string poderes::obtenerMenosPoder() {
	return menosPoder;
}
