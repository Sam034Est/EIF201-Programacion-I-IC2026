#ifndef FLOTA_H
#define FLOTA_H
#include <string>
#include <iostream>



namespace UNA{

	class flota
	{

	private:
		flota** productos;//
		int cantidad;
		int capacidad;	

	public:

		flota(int capacidadInicial = 3);
		~flota();

		void agregar();




	};



}





#endif // !FLOTA_H

