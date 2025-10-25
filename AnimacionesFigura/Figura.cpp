#include "Figura.h"

Figura::Figura(int x, int y, string nombre) {

	this->x = x;
	this->y = y;
	this->dx = 5;
	this->dy = 5;
	this->nombre = nombre;

	srand(time(nullptr));
	this->r = 0 + rand() % (255 - 0 + 1);
	this->g = 0 + rand() % (255 - 0 + 1);
	this->b = 0 + rand() % (255 - 0 + 1);
}

Figura::~Figura(){}

int Figura::getX() { return x; }
int Figura::getY() { return y; }
int Figura::getDx() { return dx; }
int Figura::getDy() { return dy; }
int Figura::getR() { return r; }
int Figura::getG() { return g; }
int Figura::getB() { return b; }
int Figura::getLimiteAncho() { return limiteAncho; }
int Figura::getLimiteAlto() { return limiteAlto; }
string Figura::getNombre() { return nombre; }

void Figura::setX(int nuevo_x) { this->x = nuevo_x; }
void Figura::setY(int nuevo_y) { this->y = nuevo_y; }
void Figura::setDx(int nuevo_dx) { this->dx = nuevo_dx; }
void Figura::setDy(int nuevo_dy) { this->dy = nuevo_dy; }
void Figura::setR(int R) { this->r = R; }
void Figura::setG(int G) { this->g = G; }
void Figura::setB(int B) { this->b = B; }
void Figura::setLimites(int nuevo_ancho, int nuevo_alto) { this->limiteAlto = nuevo_alto; this->limiteAncho = nuevo_ancho; }
void Figura::setNombre(string nuevo_nombre) { this->nombre = nuevo_nombre; }