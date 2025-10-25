#pragma once
#include "Figura.h"
class Circulo : public Figura
{
private:
	double radio;
public:
	Circulo(int x, int y, double radio);
	~Circulo();
	double getRadio();

	double area() override;
	void mover() override;
};

