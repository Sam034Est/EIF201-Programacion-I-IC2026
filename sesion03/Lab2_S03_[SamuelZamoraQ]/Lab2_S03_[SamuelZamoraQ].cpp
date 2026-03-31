// Lab2_S03_[SamuelZamoraQ].cpp : This file contains the 'main' function. 

#include <iostream>
#include "temperatura.h"

int main()
{

    // 1. Crea arreglo dinamico
    double* registroTemp = crearRegistro(cantidadDias);

    // 2. Llenar con datos del usuario
    ingresarTemperaturas(registroTemp, cantidadDias);

    // 3. Mostrar resultados
    mostrarResultados(registroTemp, cantidadDias);

    // 4. liberar memoria
    delete[] registroTemp;
    registroTemp = nullptr;


    return 0;
}

