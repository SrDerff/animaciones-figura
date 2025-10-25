#pragma once
#include <vector>
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"
using namespace System::Drawing;

class GestorFiguras
{
private:
	vector<Figura*> figuras;
public:
	GestorFiguras();
	~GestorFiguras();
	void agregarFigura(Figura* figura);
	void moverFiguras(int anchoPanel, int altoPanel);
	double areaTotal();
	void dibujarFiguras(Graphics^ g);
};

