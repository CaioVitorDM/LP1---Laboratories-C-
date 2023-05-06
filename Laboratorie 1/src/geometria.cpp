#include <iostream>
#include <string>
#include <cstdlib>
#include <string.h>
using namespace std;

#include "functions.h"

/*
Objetivo: desenvolver um programa que calcule a área e volume/perímetro de acordo com
a figura inserida pelo usuário

figuras de área e perimetro: triangulo; retangulo; quadrado; circulo.

figuras de área e volume: piramide; cubo; paralelepipedo; esfera
*/


int main(int argc, char *argv[]){


float area, perimetro, volume;

if (strcmp(argv[1], "triangulo") == 0){
	//função para calculo da area do triangulo
	//função para calculo do perimetro do triangulo
	area = area_tri(atoi(argv[2]), atoi(argv[3]));
	perimetro = perimetro_tri(atoi(argv[2]));
	cout << "Area do triangulo: " << area << endl;
	cout << "Perimetro do triangulo: " << perimetro << endl;
}

else if(strcmp(argv[1], "retangulo") == 0){
	//função para calculo da area do retangulo
	//função para calculo do perimetro do retangulo
	area = area_ret(atoi(argv[2]), atoi(argv[3]));
	perimetro = perimetro_ret(atoi(argv[2]), atoi(argv[3]));
	cout << "Area do retangulo: " << area << endl;
	cout << "Perimetro do retangulo: " << perimetro << endl;
}

else if(strcmp(argv[1], "quadrado") == 0 ){
	//função para calculo da area do quadrado
	//função para calculo do perimetro do quadrado
	area = area_quad(atoi(argv[2]));
	perimetro = perimetro_quad(atoi(argv[2]));
	cout << "Area do quadrado: " << area << endl;
	cout << "Perimetro do quadrado: " << perimetro << endl;

}

else if(strcmp(argv[1], "circulo") == 0){
	//função para calculo da area do circulo
	//função para calculo do perimetro do circulo
	area = area_circ(atoi(argv[2]));
	perimetro = perimetro_circ(atoi(argv[2]));
	cout << "Area do circulo: " << area << endl;
	cout << "Perimetro do circulo: " << perimetro << endl;

}

else if(strcmp(argv[1], "piramide") == 0){
	//função para calculo da area da piramide
	//função para calculo do volume da piramide
	area = area_pir(atoi(argv[2]), atoi(argv[3]));
	volume = volume_pir(atoi(argv[2]), atoi(argv[3]));
	cout << "Area da piramide: " << area << endl;
	cout << "Volume da piramide: " << volume << endl;
}

else if(strcmp(argv[1], "cubo") == 0){
	//função para calculo da area do cubo
	//função para calculo do volume do cubo
	area = area_cubo(atoi(argv[2]));
	volume = volume_cubo(atoi(argv[2]));
	cout << "Area do cubo: " << area << endl;
	cout << "Volume do cubo: " << volume << endl;

}

else if(strcmp(argv[1], "paralelepipedo") == 0){
	//função para calculo da area do paralelepipedo
	//função para calculo do volume do paralelepipedo
	area = area_para(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
	volume = volume_para(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
	cout << "Area do paralelepipedo: " << area << endl;
	cout << "Volume do paralelepipedo: " << volume << endl;
}

else if(strcmp(argv[1], "esfera") == 0){
	//função para calculo da area da esfera
	//função para calculo do volume da esfera
	area = area_esf(atoi(argv[2]));
	volume = volume_esf(atoi(argv[2]));
	cout << "Area da esfera: " << area << endl;
	cout << "Volume da esfera: " << volume << endl;
}








}
