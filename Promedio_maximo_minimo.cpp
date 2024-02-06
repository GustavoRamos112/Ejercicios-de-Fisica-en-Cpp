//Itz Dado un conjunto de n elementos numericos, x_i, el promedio se define como la 
//Itz suma de todos los elementos entre el numero de estos: (suma(i, n)x_i)/n,
//Itz el maximo es aquel elemento x_j que x_j > x_i, j = constante, 
//Itz i = (1,2,...,j-1,j+1,...,n-1,n) y el minimo es aquel elemento que
//Itz x_j < x_i, j = constante, i = (1,2,...,j-1,j+1,...,n-1,n).

//* Indicaciones: Dado un array de n elementos, haga tres funciones que tomen como argumento
//* este y obtengan el promedio de sus elemntos, el maximo y el minimo.

#include <iostream>

using namespace std;

double promedio(double a[], int _n);
double maximo(double a[], int _n);
double minimo(double a[], int _n);

int main(void) {
    int tot = 10;
    double a[tot-1] = {1, 2, 3, 0, 10, 5, 6, 7, 8, 9};

    cout << "El promedio es: " << promedio(a, tot);
        
    cout << "\nEl maximo es: " << maximo(a, tot);
    
    cout << "\nEl minimo es: " << minimo(a, tot);
}

double promedio(double _a[], int _n) {
    double pivote = 0, promedio;
    //? Sumamos todos los elementos del array.
    for(int i = 0; i < _n; i++) {
        pivote += _a[i];
    }
    //? Dividimos la suma por el numero total de elementos.
    promedio = pivote/_n;
    return promedio;
}

double maximo(double a[], int _n) {
    double pivote;
    //? Declaramos como maximo al primer elemento.
    pivote = a[0];
    //? Comparamos este elemento con el resto.
    for(int i = 0; i < _n; i++) {
        //? En caso de encontrar un numero mayor al guardado, este se remplazara.
        if(pivote < a[i]) {
            pivote = a[i];
        } 
    }

    return pivote;
}

double minimo(double a[], int _n) {
    double pivote;
    //? Declaramos como minimo al primer elemento.
    pivote = a[0];
    //? Comparamos este elemento con el resto.
    for(int i = 0; i < _n; i++) {
        //? En caso de encontrar un numero menor al guardado, este se remplazara.
        if(pivote > a[i]) {
            pivote = a[i];
        } 
    }

    return pivote;
}