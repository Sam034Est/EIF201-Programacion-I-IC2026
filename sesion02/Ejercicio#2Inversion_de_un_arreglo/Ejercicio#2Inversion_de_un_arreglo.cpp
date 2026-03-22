// Ejercicio#2Inversion_de_un_arreglo.cpp : This file contains the 'main' function.

#include <iostream>


int invertion(int array[20], int array2[20], int size);

int main()
{
    int array2[20] = {};
    int array[20] = {}, size = 0;


    do
    {
        std::cout << "Digite el tamanio del arreglo...*No debe ser mayor a 20*" << std::endl;
        std::cout << "/";
        std::cin >> size;

    } while (size > 20);

    std::cout << "Digite los numeros:" << std::endl;

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Numero#" << i + 1 << ": ";
        std::cin >> array[i];
    }

    invertion(array, array2, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "\n" << array[i] << " ---> " << array2[i];
    }

    return 0;
}

int invertion(int array[20], int array2[20], int size) {

    for (size_t i = size - 1, j = 0; i >= 0 && j < size; i--, j++)
    {
        array2[j] = array[i];
    }

    return array2[20];
}

