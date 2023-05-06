#include <cmath>
#define pi 3.1416

using namespace std;


#include "functions.h"


float area_tri(int base, int altura){
	return (base * altura) / 2;
}

float perimetro_tri(int base){
	return 3 * base;
}

float area_ret(int base, int altura){
	return base * altura;
}

float perimetro_ret(int base, int altura){
	return 2 * (base + altura);
}

float area_quad(int base){
	return pow(base, 2);
}

float perimetro_quad(int base){
	return 4 * base;
}

float area_circ(int raio){
	return pi * pow(raio, 2);
}

float perimetro_circ(int raio){
	return 2 * pi * raio;
}

float area_pir(int base, int altura){
	
	return area_quad(base) + (4 * area_tri(base, altura));
}

float volume_pir(int base, int altura){
	
	return (area_quad(base) * altura) / 3;
}

float area_cubo(int aresta){
	return 6 * pow(aresta, 2);
}

float volume_cubo(int aresta){
	return pow(aresta, 3);
}

float area_para(int aresta1, int aresta2, int aresta3){
	return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
}

float volume_para(int aresta1, int aresta2, int aresta3){
	return aresta1 * aresta2 * aresta3;
}

float area_esf(int raio){
	return 4 * pi * pow(raio, 2);
}

float volume_esf(int raio){
	return (4 * pi * pow(raio, 3)) / 3;
}












