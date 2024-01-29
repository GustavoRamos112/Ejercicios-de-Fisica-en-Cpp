//Itz El movimeinto rectilineo es aquel cuya distancia recorrida esta definida como:
//Itz d(t) = v*t, es el mas sencillo de los movimientos, y si le agregamos un subindice:
//Itz d_i(t) = v_i*t donde i = x_1, x_2, x_3, ..., x_n, se puede generalizar en n
//Itz dimensiones, quedando un vector: (d_(x_1), d_(x_2), ..., d_(x_n))(t).

//* Indicaciones: Dado un automovil con mr en una dimension, de velocidad v en mill/h,
//* determinar su distancia recorrida en cinco horas y mostrar la distancia que 
//* recorrio cada 0.5 horas en millas y kilometros.

#include <iostream>

using namespace std;

int main(void) {
    //? Declaramos las variables que nos serviran mas adelante.
    double velocidad_m, t_h_total, t_horas, millas, kilometros, pasos_tot, paso;
    //? Definimos nuestras variales, la velocidad, el tamaño de paso, tiempo total,
    //? tiempo inicial y numero total de pasos.
    velocidad_m = 55;
    paso = 0.5;
    t_h_total = 5;
    t_horas = 1;
    pasos_tot = (1/paso)*(t_h_total-1);

    cout << "Un automovil que viaja a " << velocidad_m << " mill/h recorre:\n";
    cout << "En 1 hora recorre " << velocidad_m << " millas o " << velocidad_m*1.609 << " kilometros\n";

    for(int i = 1; i <= pasos_tot; i++) {
        //? Hacemos las operaciones necesarias para calcular el timpo y la
        //? distancia a cada paso y luego la convertimos a kilometros.
        t_horas += paso;
        millas = t_horas*55;
        kilometros = millas*1.609;
        //? Imprimimos los resultados.
        cout << millas << " millas o " << kilometros << " kilometros en " << t_horas <<" horas\n";
    }

    return 0;
}