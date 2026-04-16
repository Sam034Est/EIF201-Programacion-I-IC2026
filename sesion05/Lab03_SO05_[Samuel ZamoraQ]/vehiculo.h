#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
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
		//constructor
		vehiculo(std::string _placa, std::string _marca, int _anio, double _km, bool _activo);
		
		//getters
		std::string getPlaca() const;
		std::string getMarca() const;
		int getAnio() const;
		double getKm() const;

		//setter
		std::string setPlaca(std::string nuevaPlaca);
		std::string setMarca(std::string nuevaMarca);
		int setAnio(int nuevoAnio);
		double setKm(double nuevoKm);	

		//metodos
		void registrarKm();
		void desactivar();
		void reactivar();
		bool mostrar() const;	

	};
	
}

#endif // !VEHICULO_H