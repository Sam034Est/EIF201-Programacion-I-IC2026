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
	std::string vehiculo::getPlaca() const{
		return placa;
	}
	const std::string getMarca() {

	}
	const int getAnio() {

	}
	double getKm() {

	}

	//setters
	std::string setPlaca(std::string nuevaPlaca) {

	}
	std::string setMarca(std::string nuevaMarca) {

	}
	int setAnio(int nuevoAnio) {

	}
	
	double setKm(double nuevoKm) {

	}

	//metodos
	void vehiculo::registrarKm() {

	}

	void vehiculo::desactivar() {

	}

	void vehiculo::reactivar() {

	}

	 bool vehiculo::mostrar() const{

	}

}