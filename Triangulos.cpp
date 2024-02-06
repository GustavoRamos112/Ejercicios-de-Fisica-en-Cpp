//Itz Dados tres angulos (a,b,c), si a+b+c=180 y a != 0, b != 0 y c != 0, estos forman un triangulo.
//Itz Dados tres longitudes (A,B,C), si A+B > C, B+C > A y C+A > B, estos forman un triangulo.
//Itz Los triangulos se pueden clasificar de dos maneras, por sus lados y por sus angulos.
//Itz Por sus lados:
//Itz Si sus tres lados son iguales, es equilatero, si tiene dos lados iguales es isoceles
//Itz y si sus tres lados son distintos, es un triangulo escaleno.
//Itz Por sus angulos:
//Itz Si uno de sus angulos es = 90°, es rectangulo, si algun angulo es > 90, es obtusangulo
//Itz y si todos su angulos son < 90°, es un triangulo acutangulo.

//* Indicaciones: haga una funcion que dados tres angulos o tres aldos, indique si estos
//* forman o no un triangulo, despues indique que tipo de triangulo es.

#include <iostream>

using namespace std;

bool es_triangulo(int eleccion, double _a, double _b, double _c);
string tipo_de_triangulo(int eleccion, double _a, double _b, double _c);

int main(void) {
    if (es_triangulo(1, 7, 5, 10)) {
        cout << "Es triangulo, tipo: " << tipo_de_triangulo(1, 7, 5, 10);
    }

    return 0;
}
//? La funcion booleana para saber si es o no un triangulo.
//? La eleccion es 1 (lados) y 2 (angulos).
bool es_triangulo(int eleccion, double _a, double _b, double _c) {
    //? Lanza un codigo de error si se da una eleccion distinta.
    if(eleccion > 2 || eleccion < 1) {
        cout << "\nIngrese 1 para comprobar por lados y 2 para comprobar por angulos\nCodigo de error: 1\n";
        return false;
    }
    //? Si es por lados, se aplican las desigualdades.
    else if (eleccion == 1) {
        double suma_1, suma_2, suma_3;

        suma_1 = _a+_b;
        suma_2 = _b+_c;
        suma_3 = _a+_c;

        return (suma_1 > _c && suma_3 > _b && suma_2 > _a);
    }
    //? Si es por angulos, se aplica la condicion.
    else if (eleccion == 2) {
        double suma;
        suma = _a+_b+_c;
        return (suma == 180);
    }

    return false;
}

string tipo_de_triangulo(int eleccion, double _a, double _b, double _c) {
    //? Lanza un codigo de error si la eleccion es distinta.
    if(eleccion > 2 || eleccion < 1) {
        cout << "\nIngrese 1 para comprobar por lados y 2 para comprobar por angulos\nCodigo de error: 1\n";
        return "1";
    }
    //? Si es por lados,se aplican las comparaciones.
    else if(eleccion == 1) {
        if(!es_triangulo(eleccion, _a, _b, _c)) {
            return "No es un triangulo";
        }

        if(_a == _b && _b == _c) {
            return "Equilatero";
        }

        else if(_a == _b || _b == _c || _a == _c) {
            return "Isoceles";
        }

        else if(_a != _b && _a != _c && _b != _c) {
            return "Escaleno";
        }
    }
    //?Si es por angulo, tambien aplicamos als comparaciones
    else if(eleccion == 2) {
        if(!es_triangulo(1, 7, 5, 10)) {
            cout << "\nNo es un triangulo\ncodigo de error: 1\n";
            return "2";
        }

        if(_a == 90 || _b == 90 || _c == 90) {
            return "Rectangulo";
        }

        else if(_a > 90 || _b > 90 || _c > 90) {
            return "Obtusangulo";
        }

        else if(_a < 90 && _b < 90 && _c < 90) {
            return "Acutangulo";
        }
    }

    return "no deberias ver esto";
}