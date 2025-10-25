#pragma once
#include "Figura.h"
class Rectangulo : public Figura
{
private:
	double ancho;
	double alto;
public:
	Rectangulo(int x, int y, double ancho, double alto);
	~Rectangulo();
	double getAncho();
	double getAlto();
	double area() override;
	void mover() override;
};

