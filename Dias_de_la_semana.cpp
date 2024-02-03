//* Indicaciones: Hacer un programa que pida un numero, al hacerlo, indicara que dia de la semana
//* es y luego preguntar si es que ese coincide con el dia de ejecucion, en caso de ser asi, imprimir
//* un mensaje afirmandolo y en caso contrario, negandolo.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, n_dias = 7;
    //? Usaremos un sistema de S y n para si y no respectivamente, asi que esta variable
    //? sera de tipo char.
    char respuesta;
    //? Declaramos las palabras base para cada caso en lugar de hacer un if para cada dia.
    string dias[n_dias] = {"0", "domingo", "lunes", "martes", "miercoles", "jueves", "viernes"};
    string numeros[n_dias] = {"cero", "primer", "segundo", "tercer", "cuarto", "quinto", "sexto", "septimo"};
    //? Pedimos el numero.
    cout << "Dime un numero del uno al siete\n";
    cin >> num;
    //? Si el numero no esta en el rango (1,7) imprime un error.
    if(num > 7 || num < 1) {
        cout << "\nNumero invalido\nCodigo de error: 1";
        return 1;
    }

    //? Imprimimos el mensaje para indicar que dia de la semana es el numero dado.
    cout << "Es de mi honor informarte que el " << numeros[num] << " dia de la semana es el " << dias[num] << "\n";
    //? Preguntamos si el dia coincide.
    cout << "¿Hoy es " << dias[num] << "? S(si) o N(no)\n";
    cin >> respuesta;
    //? Se usa un switch bajo la variable de respuesta para imprimir una afirmacion
    //? o una negacion.
    switch (respuesta) {
        case 's': case 'S':
            cout << "Feliz " << dias[num] << ", deves de estar listo para lo que venga OvO/";
        break;

        case 'n': case 'N':
            cout << "Feliz cualquier otro dia de la semana OvO/";
        break;
    }

    return 0;
}