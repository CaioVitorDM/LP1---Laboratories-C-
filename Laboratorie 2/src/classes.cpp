
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "classes.h"

Complexo::Complexo(){
	real = 0;
	imag = 0;
}

Complexo::Complexo(float r, float i){
	real = r;
	imag = i;
}

Complexo::Complexo(Complexo &c){
	real = c.getReal();
	imag = c.getImaginarie();

}

float Complexo::getReal(){
	return real;
}

void Complexo::setReal(float r){
	real = r;
}

float Complexo::getImaginarie(){
	return imag;
}

void Complexo::setImaginarie(float i){
	imag = i;
}

Complexo:: ~Complexo(){
	
}

//Sobrecarga do operador de adição

Complexo Complexo::operator+ (Complexo &c){
	float Real = real + c.real;
	float Imaginario = imag + c.imag;
	return Complexo(Real, Imaginario);
}

//Sobrecarga do operador de subtração

Complexo Complexo::operator- (Complexo &c){
	float Real = real - c.real;
	float Imaginario = imag - c.imag;
	return Complexo(Real, Imaginario);
}

//Sobrecarga do operador de multiplicação

Complexo Complexo::operator* (Complexo &c){
	float Real = (real * c.real) - (imag * c.imag);
	float Imaginario = (real * c.imag) + (imag * c.real);
	return Complexo(Real, Imaginario);
}

//Método para cálculo do módulo
float Complexo::getModule(){
	float mod = sqrt((pow(real, 2)) + (pow(imag, 2)));
	return mod;
}


std::ostream& operator<< (std::ostream &o, Complexo const &c){
	o << round(c.real) << round(c.imag) << "i";
	return o;
}


