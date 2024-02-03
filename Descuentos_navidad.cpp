//* Indicaciones: Por navidad, una tienda esta haciendo descuentos cada x MNX de compra:
//* para x < 800 no se hace descuento, x >= 800 y x <= 1500, un descuento del 10%,
//* x > 1500 y x <= 5000 un descuento del 15% y x > 5000 un descuento del 20%.
//* Programar la logica de esto.

#include <iostream>

using namespace std;

int main(void) {
    double Precio_o, Precio_f;

    cout << "Ingresa el monto de tu compra\n";
	cin >> Precio_o;

	if(Precio_o < 800) {
        cout << "El monto a pagar es " << Precio_o;
        cout << "\nEl monto es el mismo ya que este es poco para entrar en algun descuento\n";
        cout <<  "Espero haber sido de ayuda\n";
        cout << "¡¡Feliz Navidad!!";
    }
    else if(Precio_o >= 800 and Precio_o <= 1500) {
        Precio_f = Precio_o-(Precio_o*0.1);
        cout << "La cantidad que deverias de pagar es de " << Precio_o << " MXN\n";
        cout << "Sin embargo, te haremos un descuento del 10%\n";
        cout << "Precio_o que pagaras: " << Precio_f << " MXN\n";
        cout <<  "Espero haber sido de ayuda\n";
        cout << "¡¡Feliz Navidad!!";
    }
    else if(Precio_o > 1500 and Precio_o <= 5000) {
        Precio_f = Precio_o-(Precio_o*0.15);
        cout << "La cantidad que deverias de pagar es de " << Precio_o << " MXN\n";
        cout << "Sin embargo, te haremos un descuento del 15%\n";
        cout << "Precio_o que pagaras: " << Precio_f << " MXN\n";
        cout <<  "Espero haber sido de ayuda\n";
        cout << "¡¡Feliz Navidad!!";
    }
    else if(Precio_o > 5000) {
        Precio_f = Precio_o-(Precio_o*0.20);
        cout << "La cantidad que deverias de pagar es de " << Precio_o << " MXN\n";
        cout << "Sin embargo, te haremos un descuento del 20%\n";
        cout << "Precio_o que pagaras: " << Precio_f << " MXN\n";
        cout <<  "Espero haber sido de ayuda\n";
        cout << "¡¡Feliz Navidad!!";
    }
}
