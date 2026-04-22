#ifndef FLOTA_H
#define FLOTA_H

#include "vehiculo.h"



namespace UNA{

	class flota
	{

	private:
		UNA::vehiculo** unidades; //arreglo dinámico
		int cantidad = 0;	
		int capacidad = 0;

	public:

		flota(int capacidadInicial = 3);
		
		~flota();


		void agregar(vehiculo* nuevo);
		std::string* buscarPorPlaca(std::string placa);
		void mostrarPorMarca(std::string marca);
		bool eliminar(std::string placa);
		int contarActivos();
		void mostrarTodos();


	};



}


#endif //! FLOTA_H

