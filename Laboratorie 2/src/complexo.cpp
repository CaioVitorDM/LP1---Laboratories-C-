#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>


using namespace std;


#include "classes.h"

int main (int argc, char *argv[]){

	Complexo z1(atof(argv[1]), atof(argv[2]));
	Complexo z2(atof(argv[3]), atof(argv[4]));

	if(strcmp(argv[5], "+") == 0){
		Complexo z3(z1 + z2);
		cout << z3.getReal() << "+" << z3.getImaginarie() << "i" << endl;
	}

	if(strcmp(argv[5], "-") == 0){
		Complexo z3(z1 - z2);
		if(z3.getImaginarie() > 0){
			cout << z3.getReal() << "+" << z3.getImaginarie() << "i" << endl;
		}
		else{
			cout << z3 << endl;
		}
	}

	if(strcmp(argv[5], "*") == 0){
		Complexo z3(z1 * z2);
		if(z3.getImaginarie() > 0){
			cout << z3.getReal() << "+" << z3.getImaginarie() << "i" << endl;
		}
		else{
			cout << z3 << endl;
		}
	}

	if(strcmp(argv[5], "|") == 0){
		float z3 = z1.getModule();
		int aux = pow(z1.getReal(), 2) + pow(z1.getImaginarie(), 2);
		cout << setprecision(3) << z3 << ";" << aux << endl;
	}



}

