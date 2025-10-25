#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
using namespace System::Drawing;
using namespace std;

class Figura
{
protected:
	int x, y;
	int dx, dy;
	string nombre;
	int r, g, b;
	int limiteAncho, limiteAlto;
public:
	Figura(int x, int y, string nombre);
	~Figura();

	int getX();
	int getY();
	int getDx();
	int getDy();
	int getR();
	int getG();
	int getB();
	int getLimiteAncho();
	int getLimiteAlto();
	string getNombre();

	void setX(int nuevo_x);
	void setY(int nuevo_y);
	void setDx(int nuevo_dx);
	void setDy(int nuevo_dy);
	void setR(int R);
	void setG(int G);
	void setB(int B);
	void setLimites(int nuevo_ancho, int nuevo_alto);
	void setNombre(string nuevo_nombre);

	virtual void mover() = 0;
	virtual double area() = 0;
};

