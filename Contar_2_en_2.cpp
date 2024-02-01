//Itz Contar en pares es... complicado de cierta manera, sin embargo, las computadoras son mejores
//Itz en esa tarea, claro, si se sabe indicar a la computadora.

//* Indicaciones: hacer una funcion cuya al recibir un entero, sea capaz de contar
//* desde cero hasta este numero, y si est enumero no es multiplo de 2, sumar uno para
//* que lo sea.
#include <iostream>

using namespace std;

void dos_en_dos(int _n);

int main() {
    dos_en_dos(101);
}

void dos_en_dos(int _n) {
    //? Si el numero no es multiplo de dos, se le sumara uno, entonces se volvera uno.
    if (abs(_n)%2 != 0) {
        _n += 1;
    }

    cout << "(";
    
    if(_n < 0) {
        //? Si es negativo, simplemente se inicia en cero y se iran restando dos
        //? hasta llegar a dicho numero.
        for(int i = 0; i >= _n; i -= 2) {
            cout << i;
            (i == _n) ? cout << "": cout << ", " ;
        }
    }
    else {
        //? Si es positivo, se iniciara en cero igual y se iran sumando dos 
        //? hasta llegar a dicho numero.
        for(int i = 0; i <= _n; i += 2) {
            cout << i;
            (i == _n) ? cout << "": cout << ", " ;
        }
    }
    cout << ")";
}
