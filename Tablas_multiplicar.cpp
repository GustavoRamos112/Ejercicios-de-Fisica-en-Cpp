//Itz Las tablas de multiplican indican (usualmente) el resultado de hacer la operacion
//Itz n*i siendo n un numero entero e i=1,2,3,...,10

//* Indicaciones: Hacer un programa que escriba en un archivo de datos (.dat)
//* Las tablas de multiplicar el 1 hasta el 10


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    //? se indican la cantidad de tablas a realizar
    //? asi como tambien en que tala se inicia y termina
    //? en este caso, inicia en la tabal del 1 y terminara en la del 10
    int n_tablas = 10, ini = 1, fin = 10;
    //? Se indica el rango de las multiplicaciones en cada tabla
    //? en este caso, empieza en 1 y termina en 10
    int m_ini = 1, m_fin = 10;
    //? Abrimos el archivo donde se escribiran las tablas
    ofstream Tablas("Tablas.dat");
    //? Escribimos las tablas
    for(int i = ini; i <= n_tablas; i++) {
        Tablas << "La tabla del " << i << " es: \n";

        for (int j = m_ini; j <= m_fin; j++) {
            Tablas << i << "x" << j << " = " << i*j << "\n";
        }
        cout << "\n";
    }
    //? Cerramos el archivo
    Tablas.close();

    return 0;
}

