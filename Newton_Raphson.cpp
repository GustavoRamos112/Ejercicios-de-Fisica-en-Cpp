//Itz El Metodo de Newton-Raphson es un metodo que nos ayuda a encontrar raices de polinomios
//Itz de grado n, siempre dando una aproximacion inicial x_o, si hacemos la aproximacion de 
//Itz Taylor de la funcion: f(x) = f(x_o) + f'(x_o)(x-x_o) + ..., y solo tomamos los primeros 
//Itz terminos, e igualamos a cero f(x) = 0 = f(x_o) + f'(x_o)(x-x_o), despejando x, obtenemos:
//Itz x = x_o - f(x_o)/f'(x_o) y generalizando obtenemos: x_(n+1) = x_n - f(x_n)/f'(x_n).

//* Indicaciones: Dada una funcion f(x) y otra f'(x), hacer una funcion que dada x_o y n pasos,
//* aproxime por Newton-Raphson x_o a una x mas prescisa.

#include <iostream>

using namespace std;

double f(double x);
double df(double x);
double NR(int pasos, double x_o);

int main(void) {
    int pasos = 30;
    double x_o = 5;
    double x = NR(pasos, x_o);

    cout<< "\nPara " << pasos << " pasos la raiz de f(x) es aproximadamente (igual): " << x << endl;

    return 0;
}

double f(double x) {
    double y;
    y = x*x-1;
    return y;
}

double df(double x) {
    double y;
    y = 2*x;
    return y;
}

double NR(int pasos, double x_o) {
    
    for(int i = 1; i <= pasos; i++) {
        x_o -= (f(x_o)/df(x_o));
        //cout << "\nInteraccion "<< i <<" Resultado " << x_o;
    }
}