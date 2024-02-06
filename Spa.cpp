//* Indicaciones: simule al interfaz de un Spa donde la clienta en relacion
//* a su edad, se aplique un descuento, ademas de ofrecer cuatro distintos
//* paquetes, cada uno distinto.

#include <iostream>

using namespace std;

int main(void) {
	int edad, eleccion_paquete;
	double precio_1, precio_2, precio_3, precio_4;
	char confirnacion;
	string nombre;

	cout << "Hola querida clienta, ¿Cual es tu nombre?\n";
	cin >> nombre;
	cout << "¿Cuantos años tienes?\n";
	cin >> edad;
	cout << "Hola " << nombre << ", bienvenida al spa de la posada de la Luna.\n";
	cout << "Te mostrare un menu de los diferentes paquetes de servicios que tiene la posada, aunque es comun recibir solo mujeres, todos los paquetes son bisex.\n";
	cout << "Al pulsar el numero del paquete se te mostrara lo que incluye\n";
	O:
	cout << "Paquete 1 2800$\n";
	cout << "Paquete 2 1950$\n";
	cout << "Paquete 3 2500$\n";
	cout << "Paquete 4 1150$\n";
	cin >> eleccion_paquete;
	if(edad < 25) {
		precio_1 = 2800-(2800*0.15);
		precio_2 = 1950-(1950*0.15);
		precio_3 = 2500-(2500*0.15);
		precio_4 = 1150-(1150*0.15);
		switch (eleccion_paquete) {
			case 1:
			cout << "El paquete uno inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Depilacion completa o de area localizada\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 2800$ pero ya que usted es menor de veinticinco años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_1 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			break;
			case 2:
			cout << "El paquete dos inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 1950$ pero ya que usted es menor de veinticinco años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_2 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			break;
			case 3:
			cout << "El paquete tres inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 2500$ pero ya que usted es menor de veinticinco años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_3 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse cualquier letra y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			case 4:
			cout << "El paquete cuatro inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 1150$ pero ya que usted es menor de veinticinco años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_4 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			default:
			cout << "Por el momento solo contamos con estos paquetes:\n";
			goto O;
		}
	}
	else if(edad > 60) {
		precio_1 = 2800-(2800*0.25);
		precio_2 = 1950-(1950*0.25);
		precio_3 = 2500-(2500*0.25);
		precio_4 = 1150-(1150*0.25);
		switch (eleccion_paquete) {
		    case 1:
			cout << "El paquete uno inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Depilacion completa o de area localizada\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 2800$ pero ya que usted es mayor a sesenta años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_1 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
				cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
				goto O;
				break;
			}
			break;
			case 2:
			cout << "El paquete dos inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 1950$ pero ya que usted es mayor a sesenta años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_2 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
				cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
				goto O;
				break;
			}
			break;
			case 3:
			cout << "El paquete tres inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 2500$ pero ya que usted es mayor a sesenta años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_3 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse cualquier letra y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
				cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
				goto O;
				break;
			}
			case 4:
			cout << "El paquete cuatro inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "El precio original del paquete es de 1150$ pero ya que usted es mayor a sesenta años, se le hara un descuento del 15%\n";
			cout << "Precio a pagar " << precio_4 << "$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
				cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
				goto O;
				break;
			}
			default:
			cout << "Por el momento solo contamos con estos paquetes:\n";
			goto O;
		}
	}
	else if(edad > 25 && edad < 60) {
		switch (eleccion_paquete) {
			case 1:
			cout << "El paquete uno inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Depilacion completa o de area localizada\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "Precio a pagar 2800$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
				cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
				goto O;
				break;
			}
			break;
			case 2:
			cout << "El paquete dos inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Masaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "Precio a pagar 1950$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			break;
			case 3:
			cout << "El paquete tres inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Acupuntura\n";
			cout << "Manicura y Pedicura\n";
			cout << "Privacion de los cinco sentidos por una hora\n";
			cout << "Precio a pagar 2500$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			break;
			case 4:
			cout << "El paquete cuatro inluye lo siguiente:\n";
			cout << "Masaje de espalda\n";
			cout << "Msaje facial\n";
			cout << "Tratamiento facial rejuvenecedor\n";
			cout << "Manicura y Pedicura\n";
			cout << "Si usted viene sola puede tener el acompañamiento de una linda mujer o de un hombre guapo por parte de la posada\n";
			cout << "Precio a pagar 1150$\n";
			cout << "Para comprar pulse C y despues enter, si quiere ver otros paquetes, pulse N y despues enter\n";
			cin>> confirnacion;
			switch (confirnacion) {
				case 'C': case 'c':
					cout << "Gracias por su compra, que lo disfrute\n";
				break;
				case 'N': case 'n':
					goto O;
				break;
			}
			default:
				cout << "Por el momento solo contamos con estos paquetes:\n";
			goto O;
		}
	}
}
