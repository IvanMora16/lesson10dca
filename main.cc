#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "calculadora.h"

using namespace std;

int main(){
  Calculadora calc;
  int opcion = 0;

  do{
    opcion = calc.menu();

    if(opcion != 5){
      float n1, n2;

      cout << "Primer número: ";
      cin >> n1;
      cout << "Segundo número: ";
      cin >> n2;

      switch(opcion){
        case 1: cout << calc.suma(n1, n2) << endl;
                cout << endl;
                break;

        case 2: cout << calc.resta(n1, n2) << endl;
                cout << endl;
                break;

        case 3: if(n2 == 0){
                  cout << "Error, el divisor no puede ser 0" << endl;
                  cout << endl;
                }
                else {
                  cout << calc.division(n1, n2) << endl;
                  cout << endl;
                }
                break;

        case 4: cout << calc.multiplicacion(n1, n2) << endl;
                cout << endl;
                break;
      }
    }
  } while(opcion != 5);

  return 0;
}
