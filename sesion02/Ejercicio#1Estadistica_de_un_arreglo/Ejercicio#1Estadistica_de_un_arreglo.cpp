// Ejercicio#1Estadistica_de_un_arreglo.cpp : This file contains the 'main' function.
#include <iostream>
#include <array>

void menu();
double numHighest(double inNum[]);

int main(){

	menu();

    system("pause");
    return 0;
}


void menu(){	
	
	std::array<double, 10 > inNum = {};


	std::cout << "Ingrese 10 Numeros: " << std::endl;
	
	for (size_t i = 0; i < 10; i++)
	{
		//int aux =+ 1;
		std::cout << "Valor#" << i+1 << ": ";
		std::cin >> inNum[i];
	}

	std::cout << "\nEl numero mayor es: " << numHighest(inNum[]);

}

double numHighest(double inNum[])
{
	double topNum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		do
		{
			topNum = inNum[i];
		} while (inNum[i] < inNum[i+1]);
	}

	return topNum;
}