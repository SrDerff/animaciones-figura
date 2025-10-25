#include "Circulo.h"

Circulo::Circulo(int x, int y, double radio)
	: Figura(x,y, "Circulo"), radio(radio) { }

Circulo::~Circulo(){}

double Circulo::getRadio() { return radio; }
double Circulo::area() { return 3.14 * radio * radio; }
void Circulo::mover() { 
	
	x += dx;
	int diam = int(radio * 2);

	if (x < 0) {
		x = 0;
		dx *= -1;
	}
	else if (x + diam > limiteAncho) {
		x = limiteAncho - diam;
		dx *= -1;
	}
}