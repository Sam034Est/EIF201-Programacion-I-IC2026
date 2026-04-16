#include "vehiculo.h"


namespace UNA {
	//constructor
	vehiculo::vehiculo(std::string _placa, std::string _marca,
					int _anio, double _km, bool _activo)
	{
		placa = _placa;
		marca = _marca;
		anio = _anio;
		km = _km;
		activo = _activo;
	}
	//getter
	std::string vehiculo::getPlaca() const {
		return placa;
	}
	std::string vehiculo::getMarca() const {
		return marca;
	}
	int vehiculo::getAnio() const{
		return anio;
	}
	double vehiculo::getKm() const{
		return km;
	}

	//setter
	std::string vehiculo::setPlaca(std::string nuevaPlaca) {
		placa = nuevaPlaca;
	}

	std::string vehiculo::setMarca(std::string nuevaMarca) {
		marca = nuevaMarca;
	}
	
	int vehiculo::setAnio(int nuevoAnio) {
		anio = nuevoAnio;
	}
	
	double vehiculo::setKm(double nuevoKm) {
		km = nuevoKm;
	}


	//metodos
	void vehiculo::registrarKm() {
	    /*std::cout << "Placa: " << std::endl;
		std::cout << "Marca: " << std::endl;
		std::cout << "anio: " << std::endl;
		std::cout << "kilometraje: " << std::endl;*/
	}

	void vehiculo::desactivar() {

	}

	void vehiculo::reactivar() {

	}

	bool vehiculo::mostrar() const {

	}

}