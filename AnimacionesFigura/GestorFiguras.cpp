#include "GestorFiguras.h"

GestorFiguras::GestorFiguras(){}
GestorFiguras::~GestorFiguras(){
	for (auto f : figuras) {
		delete f;
	}
	figuras.clear();
}

void GestorFiguras::agregarFigura(Figura* figura){
	figuras.push_back(figura);
}
void GestorFiguras::moverFiguras(int anchoPanel, int altoPanel){
	
	for (auto f : figuras) {
		f->setLimites(anchoPanel, altoPanel);
		f->mover();
	}
}
double GestorFiguras::areaTotal(){
	double total = 0.0;
	for (auto f : figuras) {
		total += f->area();
	}
	return total;
}

void GestorFiguras::dibujarFiguras(Graphics^ g){

	for (auto f : figuras) {
		Color color = Color::FromArgb(f->getR(), f->getG(), f->getB());
		SolidBrush^ brush = gcnew SolidBrush(color);
		
		if (f->getNombre() == "Circulo") {
			Circulo* circulo = (Circulo*)f;
			g->FillEllipse(brush, circulo->getX(), circulo->getY(), circulo->getRadio() * 2, circulo->getRadio() * 2);
		}
		else if (f->getNombre() == "Rectangulo") {
			Rectangulo* rectangulo = (Rectangulo*)f;
			g->FillRectangle(brush, rectangulo->getX(), rectangulo->getY(), rectangulo->getAncho(), rectangulo->getAlto());
		}
	}
}