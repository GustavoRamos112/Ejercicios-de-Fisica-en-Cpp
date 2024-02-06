//Itz El alfabeto en español solo tiene 5 vocales y 22 consonantes, las cinco vocales
//Itz son (a,e,i,o,u).

//* Indicaciones: Crear una funcion booleana que indique si el caracter dado es 
//* o no una vocal.

#include <iostream>

using namespace std;

bool es_vocal(char letra);

int main(void) {
    cout << es_vocal('a') << "\n";
    cout << es_vocal('b') << "\n";

    return 0;
}
//? Declaramos la funcion booleana y le pasamos como argumento el caracter a comparar.
bool es_vocal(char caracter) {
    //? Dado que solo haremos comparacion entre caracteres, usaremos un 
    //? switch para el argumento.
    switch (caracter) {
        //? Comparamos para vocales mayusculas y minusculas.
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            //? En caso de ser, retornara verdadero.
            return true;
        break;

        default:
            //? En caso de no ser, retornara falso.
            return false;
        
    }
}