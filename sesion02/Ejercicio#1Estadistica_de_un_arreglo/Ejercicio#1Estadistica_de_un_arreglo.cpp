// Ejercicio#1Estadistica_de_un_arreglo.cpp : This file contains the 'main' function.
#include <iostream>

void menu();
double numHighest(double numHighest[]);

int main(){

	menu();

    
    return 0;
}


void menu(){	

	double inNum[10];


	std::cout << "Ingrese 10 Numeros: " << std::endl;
	
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Valor#" << i+1 << ": ";
		std::cin >> inNum[i];
	}
	
	std::cout << "\nEl numero mayor fue: " << numHighest(inNum) << std::endl;

	system("pause");

	
}

double numHighest(double inNum[])
{
	double topNum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (inNum[i] > topNum)
		{
			topNum = inNum[i];
		}
	}

	return topNum;
}