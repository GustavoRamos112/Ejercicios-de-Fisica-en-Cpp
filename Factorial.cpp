//Itz El factorial de un numero entero positivo (natural) n se define como:
//Itz n! = n*(n-1)*(n-2)*...*2*1.

//* Indicaciones: Crear una funcion que al llamarla y darle como
//* argumento un numero entero positivo, devuelva su factorial.
#include <iostream>

using namespace std;

int factorial(int _numero);

int main(void) {
    int num = 5;
    //? Llamamos a la funcion dandole como argumetno el numero que definimos
    //? anteriormente, el 5 en este caso.
    cout << num << "! = " << factorial(num);
    return 0;
}

int factorial(int _numero) {
    //? Si el numero no es positivo devuelve un error.
    if(_numero < 0) {
        cout << "Error, el numero tiene que ser un entero positivo\nCodigo de error: 1"; 
        return 1;
    }
    //? Definimos el inicio de la multiplicacion.
    int fac = 1;    
    //? El ciclo lo empezamos en 2 pues no es necesario multiplicar por 1.
    //? 1*2*3*...*(_numero-1)*_numero.
    for(int i = 2; i <= _numero; i++) {
        //? Se hace la multiplicacion
        fac *= i;
    }
    //? Devolvemos el valor del factorial.
    return fac;
}
