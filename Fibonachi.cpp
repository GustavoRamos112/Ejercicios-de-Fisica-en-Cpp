//Itz Supon una serie que inicie como (1, 1), ahora, para obtener el tercer termino,
//Itz suma el primero y el tercero, osea (1, 1, 1+1=2), y para el cuarto, sumas el
//Itz segundo y el tercero (1, 1, 2, 3) y asi sucesivamente: (1, 1, 2, 3, 5, 8, 13, ...),
//Itz esta se conoce como al serie de Fibonachi, y explica muchos sucesos en la naturaleza
//Itz (sobre todo, poblaciones).

//* Indicaciones: Hacer una funcion que devuelva el n-simo numero de la serie de fibonachi
//* y en la funcion principal hacer que se impriman esos n-simos numeros dela serie.

#include <iostream>

using namespace std;
//? Declaramos la funcion como entera y con un argumento entero igual.
int fibonachi(int n);

int main(void) {
    //? Declaramos la cantidad de numeros que vamos a imprimir.
    int num = 5;
    //? Para imprimirlo en un buen formato
    cout << "(";
    //? Usamos un ciclo for para llamar a la funcion la cantidad de veces solicitada.
    for (int i = 0; i < num; i++) {
        cout << fibonachi(i);
        //? Usamos el operador ternario para que al imprimir el ultimo numero solicitado
        //? no se imprima una coma (n-1, n,) sino, que lo deje pasar (n-1, n).
        (i == num-1 ) ? cout << "": cout << ", ";
    }
    cout << ")";
    
    return 0;
}

int fibonachi(int n) {
    //? En caso de no ser un natural, se devueve el codigo de error 1.
    if(n < 0) {
        cout << "\nError, numero invalido, la serie no admite cantidades negativas\nCodigo de error: 1\n";
        return 1;
    }
    //? Para los primeros casos el termino 0 y 1 es igual a 1.
    if(n == 0 || n == 1) {
        return 1;
    }

    int num;
    //? En lugar de usar un ciclo for, usaremos la recursividad para llamar a la misma funcion
    //? pero para el termino n-1 y n-2, y asi sucesivamente hasta llegar a n-(n-1) y n-n que son 1.
    num = fibonachi(n-1) + fibonachi(n-2);
    //? Retornamos el numero.
    return num;
}