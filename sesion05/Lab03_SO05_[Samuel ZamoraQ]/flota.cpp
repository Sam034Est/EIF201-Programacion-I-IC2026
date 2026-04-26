#include "flota.h"



namespace UNA {
	//contructor
	flota::flota(int capacidadInicial) {
		cantidad = 0;
		capacidad = capacidadInicial;

		vehiculos = new vehiculo* [capacidadInicial];
		for (size_t i = 0; i < capacidad; i++)
		{
			vehiculos[i] = nullptr;
		}
	}
	//destructor
	flota::~flota() {
		for (size_t i = 0; i < cantidad; i++) {
			delete flota::vehiculos[i];
			vehiculos[i] = nullptr;
		}
		delete[] vehiculos;
		vehiculos = nullptr;
	}
	//metodos

	void flota::redimensionar() {
		int nuevaCapacidad = capacidad * 2;
		
		vehiculo** nuevoArreglo = new vehiculo * [nuevaCapacidad];
		
		for (size_t i = 0; i < cantidad; i++)
		{
			nuevoArreglo[i] = vehiculos[i];
		}

		//inicializar las posiciones nuevas
		for (size_t i = 0; i < cantidad; i++)
		{
			nuevoArreglo[i] = nullptr;
		}

		delete[] vehiculos;

		vehiculos = nuevoArreglo;

		capacidad = nuevaCapacidad;
	}


	void flota::agregar(vehiculo* nuevo) {

		if (nuevo == nullptr) {
			std::cout << "Error";
		}
		if (cantidad == capacidad) {
			redimensionar();
		}
		vehiculos[cantidad] = nuevo;
		cantidad++;
	}

	std::string* flota::buscarPorPlaca(std::string placa) {
			
	}


}