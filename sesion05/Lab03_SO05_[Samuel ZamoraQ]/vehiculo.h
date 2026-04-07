#ifndef VEHICULO_H
#include <iostream> 

namespace UNA{
	class vehiculo {
	private: 
		std::string placa = "";
		std::string marca = "";
		int anio = 0;
		double km = 0.0;
		bool activo = true;
	public:
		vehiculo(std::string _placa, std::string _marca,int _anio, double _km, bool _activo);	//constructor
		void registrarKm();
		void desactivar();
		void reactivar();
		const void mostrar();

	};
	
}









#endif // !VEHICULO_H

