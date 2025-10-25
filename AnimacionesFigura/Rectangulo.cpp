#include "Rectangulo.h"

Rectangulo::Rectangulo(int x, int y, double ancho, double alto)
	: Figura(x, y, "Rectangulo"), ancho(ancho), alto(alto) {}
Rectangulo::~Rectangulo(){}

double Rectangulo::getAncho() { return ancho; }
double Rectangulo::getAlto() { return alto; }
double Rectangulo::area() { return ancho * alto; }
void Rectangulo::mover() {

	y += dy;

	int h = int(alto);

	if (y < 0) {
		y = 0;
		dy *= -1;
	}
	else if (y + h > limiteAlto) {
		y = limiteAlto - h;
		dy *= -1;
	}
}