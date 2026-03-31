#include "paquetes.h"
#include <iostream>

double* crearRegistro(int& cantidad) {

	std::cout << "Digite la cantidad de paquetes: ";
	std::cin >> cantidad;
	std::cout << std::endl;
	while (cantidad <= 0) {
		std::cout << "'Error de digitacion' Debe ser mayor a cero" << std::endl;
		std::cout << "Intente de nuevo: ";
		std::cin >> cantidad;
	}
	
	double* pesos = new double[cantidad];
	
	return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {

	std::cout << "\n| Ingrese el peso de cada paquete |" << std::endl;

		for (size_t i = 0; i < cantidad; i++)
		{
			std::cout << "Paquete #" << i+1 << ": ";
			std::cin >> pesos[i];

		}

}

double calcularPesoTotal(const double* pesos, int cantidad) {
	double pesoTotal = 0.0;

	for (size_t i = 0; i < cantidad; i++)
	{
		pesoTotal += pesos[i];
	}

	std::cout << "Peso total es: " << pesoTotal << " KG" << std::endl;

	return pesoTotal;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int nLimite= 0;
	std::cout << "Ingrese el limite de peso: ";
	std::cin >> limite;

	for (size_t i = 0; i < cantidad; i++)
	{
		if (pesos[i] > limite) {
			nLimite++;
		}
	}
	std::cout << nLimite << " paquetes superaron el limite" << std::endl;
	
	return nLimite;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {
	const double* masPesado = nullptr;
	masPesado = &pesos[0];

	for (size_t i = 0; i < cantidad; i++)
	{
		if (*masPesado < pesos[i])
		{
			masPesado = &pesos[i];

		}
		if (*masPesado == pesos[i])
		{
			masPesado = &pesos[(i-1)];
		}

	}
	
	return masPesado;
}















