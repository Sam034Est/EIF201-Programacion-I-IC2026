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
	//getter y setters
	
	
	//metodos
	void vehiculo::registrarKm() {

	}

	void vehiculo::desactivar() {

	}

	void vehiculo::reactivar() {

	}

	const void vehiculo::mostrar() {

	}
}