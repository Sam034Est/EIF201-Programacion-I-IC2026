// Ejercicio#3Operaciones_sobre_una_matriz_3x3.cpp : This file contains the 'main' function.

#include <iostream>
#include <iomanip>


void read(int matriz[3][3], int, int);
void sumaDeFilas(int matriz[3][3], int, int);
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

void sumaDeFilas(int matriz[3][3],int filas,int cols) {
    int fila1 = 0;
    int fila2 = 0;
    int fila3 = 0;
    
    for (size_t i = 0; i < cols; i++)
    {
        for (size_t j = 0; j < filas; j++)
        {
           if (i == 0) {
                fila1 += matriz[i][j];
           }
           if (i == 1) {
                fila2 += matriz[i][j];
           }
           if (i == 2) {
                fila3 += matriz[i][j];
           }
        }
    }

    std::cout << "Total Columna#1: " << std::setw(5) << fila1;
    std::cout << " Total Columna#2: " << std::setw(5) << fila2;
    std::cout << " Total Columna#3: " << std::setw(5) << fila3 << std::endl;
   
}

void sumaDeCols(int matriz[3][3], int filas, int cols) {
    int cols1 = 0;
    int cols2 = 0;
    int cols3 = 0;

    for (size_t i = 0; i < cols; i++)
    {
        for (size_t j = 0; j < filas; j++)
        {
            if (i == 0) {
                cols1 += matriz[j][i];
            }
            if (i == 1) {
                cols2 += matriz[j][i];
            }
            if (i == 2) {
                cols3 += matriz[j][i];
            }
        }
    }

    std::cout << "Total Columna#1: " << std::setw(5) << cols1;
    std::cout << " Total Columna#2: " << std::setw(5) << cols2;
    std::cout << " Total Columna#3: " << std::setw(5) << cols3;

}
void imprimirMatriz(int matriz[3][3], int filas, int cols) {
    sumaDeFilas(matriz,filas,cols);
    sumaDeCols(matriz, filas, cols);
}