//* Indicaciones: Crear una funcion que al darle dos numeros, uno de inicio y otro de final, 
//* ademas de un tamaño de paso, cuente en reversa desde el inicio al final, cumpliendo:
//* inicio > final y paso > 0.

#include <iostream>

using namespace std;

int contar_en_reversa(int in, int fin, double paso);

int main() {

    contar_en_reversa(100, 50, 1);

    return 0;
}

int contar_en_reversa(int in, int fin, double paso) {
    //? Se lanzan mensajes de error si no se cumplen las condiciones.
    if (in < fin) {
        cout << "\nError, el primer argumento tiene que ser mayor al segundo\n";
        cout << "Codigo de error: 1\n";
        return 1;
    }
    else if (paso < 0) {
        cout << "\nError, el paso no puede ser negativo\n";
        cout << "Codigo de error: 2\n";
        return 2;
    }
    
    cout << "(";
    for(int i = in; i >= fin; i -= paso) {
        cout << i;
        (i == fin) ? cout << "": cout << ", " ;
    }
    cout << ")";

    return 0;
}

