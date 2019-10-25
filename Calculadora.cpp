// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

int numero1 = 0, numero2 = 0, numero3 = 0, resultado, seleccion, dato, seleccion1;
float resultado2;
int suma(int numero1, int numero2) {
	resultado = numero1 + numero2;
	std::cout << "\nEl resultado es: " << resultado;
	std::cout << "\n¿Desea sumar otro numero a su cantidad?\n 1 Para si, presione cualquier tecla para no ";
	std::cin >> dato;
	while (dato == 1) {
		std::cout << "\nIngrese el numero que deasea\n";
		std::cin >> numero3;
		resultado = resultado + numero3;
		std::cout << "El resultado es: " << resultado;
		std::cout << "\n¿Desea sumar otro numero a su cantidad?\n 1 Para si, presione cualquier tecla para no \n";
		std::cin >> dato;
	}
	return resultado;
}

int resta(int numero1, int numero2) {
	resultado = numero1 - numero2;
	std::cout << "El resultado es: " << resultado;
	std::cout << "¿Desea restar otro numero a su cantidad?\n 1 Para si, presione cualquier tecla para no ";
	std::cin >> dato;
	while (dato == 1) {
		std::cout << "\nIngrese el numero que deasea\n";
		std::cin >> numero3;
		resultado = resultado - numero3;
		std::cout << "El resultado es: " << resultado;
		std::cout << "\n¿Desea restar otro numero a su cantidad?\n 1 Para si, presione cualquier tecla para no \n";
		std::cin >> dato;
	}
	return resultado;
}

int multiplicacion(int numero1, int numero2) {
	resultado = numero1 * numero2;
	std::cout << "El resultado es: " << resultado;
	std::cout << "¿Desea multipliicar por otro numero su cantidad?\n 1 Para si, presione cualquier tecla para no\n ";
	std::cin >> dato;
	while (dato == 1) {
		std::cout << "\nIngrese el numero que deasea\n";
		std::cin >> numero3;
		resultado = resultado * numero3;
		std::cout << "El resultado es: " << resultado;
		std::cout << "\n¿Desea multiplicar por otro numero su cantidad?\n 1 Para si, presione cualquier tecla para no\n";
		std::cin >> dato;
	}
	return resultado;
}

int division(int numero1, int numero2) {
	resultado2 = numero1 / numero2;
	std::cout << "El resultado es: " << resultado2;
	std::cout << "¿Desea dividir por otro numero su cantidad?\n 1 Para si, presione cualquier tecla para no \n";
	std::cin >> dato;
	while (dato == 1) {
		std::cout << "\nIngrese el numero que deasea\n";
		std::cin >> numero3;
		resultado2 = resultado2 / numero3;
		std::cout << "El resultado es: " << resultado2;
		std::cout << "\n¿Desea dividir por otro numero su cantidad?\n 1 Para si, presione cualquier tecla para no \n";
		std::cin >> dato;
	}
	return resultado2;
}

int main(int argc, _TCHAR* argv[])
{
	do {
		std::cout << "Bienvenido \n Ingrese su primer numero \n";
		std::cin >> numero1;
		std::cout << "Bienvenido \n Ingrese su segundo numero \n";
		std::cin >> numero2;
		std::cout << "\n Presiona 1 para sumarlos \n Presiona 2 para restarlos \n Presiona 3 para multiplicarlos \n Presiona 4 para dividirlos\n";
		std::cin >> seleccion;
		switch (seleccion) {
		case 1:
			suma(numero1, numero2);
			break;
		case 2:
			resta(numero1, numero2);
			break;
		case 3:
			multiplicacion(numero1, numero2);
			break;
		case 4:
			division(numero1, numero2);
			break;
		default:
			std::cout << "Ha seleccionado una tecla incorrecta\n";
			break;
		}
		std::cout << "¿Desea hacer otra operacion \n 1 Para si, presione cualquier tecla para no ";
		std::cin >> seleccion1;
	} while (seleccion1 == 1);
	std::cout << "Gracias por usar el programa\n";
}



