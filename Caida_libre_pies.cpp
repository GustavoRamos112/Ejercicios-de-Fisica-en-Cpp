//Itz Cuando un objeto cae sin algun obstaculo se le llama caida libre
//Itz cual no es mas que un MRUA (Movimiento Rectilineo Uniformemente Acelerado)
//Itz pero con a = g (aceleracion igual a g = 9.8 m/s^2 = 32 ft/s^2), para este programa
//Itz queremos saber la distancia recorrida en un dt y la ditancia total
//Itz entonces usaremos la ecuacion: h = v_o*t+0.5*g*t^2

//* Indicaciones: crear una funcion general para MRUA y con esta, crear una 
//* tabla con tres columas, t en segundos (con un paso de 1 segundo), 
//* dh (altura recorrida en dt) y h (distancia total en t) estas en pies

#include <iostream>

using namespace std;

double d_MRUA(double aceleracion, double t_tot, double v_o);

int main(void) {
    double t_tot, aceleracion, h_1, h_2, dh;

    cout << "t(s)     dh(ft)     h(ft)\n";

    aceleracion = 32;
    t_tot = 10;
    //? A tiempo cero, nuestras tres columnas son cero.
    cout << 0 << "\t " << 0 << "\t" << 0 << "\n";
    for(int i = 1; i <= t_tot; i++) {
        h_1 = d_MRUA(aceleracion, i, 0);
        h_2 = d_MRUA(aceleracion, i-1, 0);
        dh = h_1-h_2;
        cout << i << "\t " << dh << "\t" << h_1 << "\n";
    }
}

//Itz El tiempo negativo en si no supone un problema, pues podria considerarse
//Itz como el tiempo antes del presente, osea, el pasado, aunque muchos otros
//Itz fisicos te digan que esto esta mal, me ha ayudado mucho y me ha ahorrado
//Itz mucha talacha matematica.

//? Definimos nuestra funcion y pedimos la aceleracion, el tiempo y la velocidad inicial.
double d_MRUA(double _aceleracion, double _t, double _v_o) {
    double _d;
    _d = _v_o*_t+0.5*_aceleracion*_t*_t;
    return _d;
}
