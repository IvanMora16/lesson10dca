#include "calculadora.h"

//reglado bug de números enteros, ahora funciona también con decimales

int Calculadora::menu(){
  int opcion = 0;

  do{
    cout << "Calculadora" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. División" << endl;
    cout << "4. Multiplicación" << endl;
    cout << "5. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    cout << endl;
  } while (opcion < 1 || opcion > 5);

  return opcion;
}

float Calculadora::suma(float num1, float num2){
  return num1 + num2;
}

float Calculadora::resta(float num1, float num2){
  return num1 - num2;
}

float Calculadora::division(float num1, float num2){
  return num1 % num2;
}

float Calculadora::multiplicacion(float num1, float num2){
  return num1 * num2;
}
