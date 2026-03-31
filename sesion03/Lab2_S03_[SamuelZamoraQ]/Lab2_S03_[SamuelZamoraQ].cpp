// Lab2_S03_[SamuelZamoraQ].cpp : This file contains the 'main' function. 
#include "PAQUETES.H"
#include <iostream>

int main()
{
    int cantidadDias = 0;

    //Crear el arreglo dinamico
    double* pesos = crearRegistro(cantidad);
    
    //Pide los pesos al usuario
    ingresarPesos(pesos, cantidad);
    
    //asigna el peso total calculado
    double pesoTotal = calcularPesoTotal(pesos, cantidad);

    //Muestra cuantos paquetes superan el limite ingresado
    int nLimite = contarSobreLimite(pesos, cantidad, limite);

    //encuetra el paquete mas pesado
    const double* masPesado = buscarMasPesado(pesos, cantidad);
    
    std::cout << "El paquete mas pesado fue: Paquete#" << masPesado << std::endl;

    //limpiaza de memoria
    delete[] pesos;
    pesos = nullptr;

    system("pause");
    return 0;
}

