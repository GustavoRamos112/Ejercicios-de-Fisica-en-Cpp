//Itz Las distintas unidades de temperatura fueron descubiertas en distintos contextos historicos
//Itz e interpretados de distintas maneras, los grados centigrados (Celcius, °C) surgen al poner
//Itz el cero (0 °C) en el punto de congelacion del agua y 100 en el punto de ebullicion a nivel 
//Itz de mar, y los grados Fahrenheit usan el mismo principio pero usando como 0 la congelacion
//Itz de una solucion de salmuera, y como 96, la temperatura corporal promedio, y haciendo medidas,
//Itz se establece que 0 °C = 32 °F y 100 °C = 212 °F asi, podemos definir una transformacion como:
//Itz °F = 9/5*°C+32.

//* Indicaciones: hacer un programa que imprima en una tabla los grados celcius y fahrenheit en
//* un rango (10 °C, 20 °C) y dado un paso de 0.5 °C

#include<iostream>
#include<iomanip>

using namespace std;

int main(void) {
    //? Se establece el inicio, el final y el tamaño de paso.
    double in = 10, fin = 20, paso = 0.5;
    double g_C, g_F;

    cout <<"Grados       Grados\n";
    cout <<"Celcius      Fahrenheit\n";
    cout <<"------       --------\n";

    g_C = in;
    //? Se establece una precision de 4 decimales.
    cout << setiosflags(ios::showpoint) << setprecision(4);
    //? Usamos un while para ahorrar unas cuantas lineas de codigo.
    while(g_C < fin) {
        g_F = (9/5)*g_C+32;
        //? Imprimimos g_C y g_F, el ultimo,despues de 10 espacios respecto al inicio
        //? osea, si g_C ocupa 4 espacios, g_F se imprimira 10-4 espacios despues.
        cout << g_C << fixed << setw(10) << g_F << endl;
        g_C += paso;
    }

    return 0;
}
