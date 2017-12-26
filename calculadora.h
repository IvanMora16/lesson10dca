#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Calculadora {
	public:
		int menu();
		float suma(float n1, float n2);
		float resta(float n1, float n2);
		float multiplicacion(float n1, float n2);
		float division(float n1, float n2);
};
