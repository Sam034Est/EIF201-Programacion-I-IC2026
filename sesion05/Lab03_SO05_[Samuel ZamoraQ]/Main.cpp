// Lab03_SO05_[Samuel ZamoraQ].cpp : This file contains the 'main' function. 
#include <iostream>
#include "vehiculo.h"
#include "flota.h"

//Todas las clases deben estar dentro de namespace UNA.
//Todos los archivos .h deben tener guardas (#ifndef / #define / #endif).
//Capacidad inicial de 3. El arreglo debe crecer automáticamente al agregar cuando está lleno.
//Todos los métodos que no modifican el estado del objeto deben marcarse como const.
// Commit con mensaje descriptivo y push al repositorio antes de finalizar la sesión.

int main()
{
    int opc = 0;

    std::cout << " ----------------------" << std::endl;
    std::cout << "|    FLOTA VEHICULAR   |" << std::endl;
    std::cout << " ----------------------" << std::endl;
    std::cout << "1. Registrar vehiculo " << std::endl;
    std::cout << "2. Buscar vehiculo por placa" << std::endl;
    std::cout << "3. Mostrar vehiculos por marca" << std::endl;
    std::cout << "4. Registrar kilometros a un vehiculo" << std::endl;
    std::cout << "5. Desactivar vehiculo(fuera de servicio)" << std::endl;
    std::cout << "6. Reactivar vehiculo" << std::endl;
    std::cout << "7. Eliminar vehiculo(dar de baja definitiva)" << std::endl;
    std::cout << "8. Mostrar flota completa" << std::endl;
    std::cout << "9. Mostrar cantidad de vehiculos activos" << std::endl;
    std::cout << "10. Salir " << std::endl;
    std::cout << "/"; std::cin >> opc;

    

}

