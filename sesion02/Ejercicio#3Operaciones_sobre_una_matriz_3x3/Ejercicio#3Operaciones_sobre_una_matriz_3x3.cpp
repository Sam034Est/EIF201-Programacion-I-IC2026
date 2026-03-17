// Ejercicio#3Operaciones_sobre_una_matriz_3x3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


void read(int matriz[3][3], int, int);
int sumaDeFilas(int matriz[3][3], int, int);
void imprimirMatriz(int matriz[3][3], int, int);

int main()
{
    const int filas = 3, cols = 3;
    int matriz[filas][cols]{};
    
    read(matriz, filas, cols);
	imprimirMatriz(matriz, filas, cols);
}

void read(int matriz[3][3], int filas, int cols) {
    std::cout << "Digite los 9 valores para llenar una matriz de 3x3\n";

    for (size_t i = 0; i < filas; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            std::cout << "Posicion [" << i << "][" << j << "] /";
            std::cin >> matriz[i][j];
        }
    }
}

int sumaDeFilas(int matriz[3][3], int filas, int cols) {
    int suma = 0;
    
    for (size_t i = 0; i <= filas; i++)
    {
			suma = suma + matriz[i][0];
    }

    return suma;
}

void imprimirMatriz(int matriz[3][3], int filas, int cols) {
    std::cout << "Matriz suma de filas: " << sumaDeFilas(matriz, filas, cols) << std::endl;
}
