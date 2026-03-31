#include "temperatura.h"
#include <iostream>
#include <iomanip>

double* crearRegistro(int& cantidadDias) {

	std::cout << "+-------------------------------------+" << std::endl;
	std::cout << "| Sistema de registro de temperaturas |" << std::endl;
	std::cout << "+-------------------------------------+" << std::endl;
	std::cout << "Ingrese la cantidad de dias a registrar: ";
	std::cin >> cantidadDias;

	while (cantidadDias <= 0) {
		std::cout << "Error: debe ser mayor a cero, intentelo de nuevo: ";
		std::cin >> cantidadDias;
	}

	double* registro = new double[cantidadDias];
	
	return registro;
}

void ingresarTemperaturas(double* registro, int cantidadDias) {
	std::cout << std::endl << "Ingrese las temperaturas en grados Celsius: " << std::endl;
	for (size_t i = 0; i < cantidadDias; i++)
	{
		std::cout << "Dias " << (i + 1) << ": ";
		std::cin >> registro[i]; // equivalente *(registro + i)
	}
}

double calcularPromedio(const double* registro, int cantidadDias) {
	double suma = 0.0;
	for (size_t i = 0; i < cantidadDias; i++) suma += registro[i];
	
	return suma / cantidadDias;
}

double calcularMaximo(const double* registro, int cantidadDias) {
	double maximo = registro[0];
	for (size_t i = 0; i < cantidadDias; i++)
	{
		if (registro[i] > maximo) maximo = registro[i];
	}
	return maximo;
}

double calcularMinimo(const double* registro, int cantidadDias) {
	double minimo = registro[0];
	for (size_t i = 0; i < cantidadDias; i++)
	{
		if (registro[i] < minimo) minimo = registro[i];
	}
	return minimo;
}

void mostrarResultados(const double* registro, int cantidadDias) {
	std::cout << std::endl << std::fixed << std::setprecision(2);
	std::cout << "+----------------------------------+" << std::endl;
	std::cout << "| Resumen del registro		   |" << std::endl;
	std::cout << "+----------------------------------+" << std::endl;
	std::cout << " Dias registrados:	" << cantidadDias << std::endl;
	std::cout << " Temperatura Promedio " << calcularPromedio(registro, cantidadDias) << "C" << std::endl;
	std::cout << " Temperatura Maxima " << calcularMaximo(registro, cantidadDias) << "C" << std::endl;
	std::cout << " Temperatura Minima " << calcularMinimo(registro, cantidadDias) << "C" << std::endl;
	std::cout << "+----------------------------------+" << std::endl;
}