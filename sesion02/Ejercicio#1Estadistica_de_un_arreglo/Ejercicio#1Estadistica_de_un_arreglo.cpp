// Ejercicio#1Estadistica_de_un_arreglo.cpp : This file contains the 'main' function.
#include <iostream>

void menu();
double numHighest(double inNum[], int size);
double numLower(double inNum[], int size);
double suma(double inNum[], int size);
double average(double inNum[], int size);

int main(){

	menu();

    
    return 0;
}


void menu(){	

	double inNum[10];
	const int size = 10;


	std::cout << "Ingrese 10 Numeros: " << std::endl;
	
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "Valor#" << i+1 << ": ";
		std::cin >> inNum[i];
	}
	
	std::cout << "\nEl numero mayor fue: " << numHighest(inNum,size) << std::endl;
	std::cout << "\nEl numero menor fue: " << numLower(inNum,size) << std::endl;
	std::cout << "\nEl total de la suma de los numero es: " << suma(inNum,size) << std::endl;
	std::cout << "\nEl promedio es:  " << average(inNum,size) << std::endl;


	system("pause");

	
}

double numHighest(double inNum[], int size)
{
	double topNum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (inNum[i] > topNum)
		{
			topNum = inNum[i];
		}
	}

	return topNum;
}

double numLower(double inNum[], int size)
{
	double lowerNum = 0;
	for (size_t i = 0; i < size; i++)
	{
		lowerNum = inNum[0];
		if (inNum[i] < lowerNum)
		{
			lowerNum = inNum[i];
		}
	}

	return lowerNum;
}

double suma(double inNum[], int size) {
	double total = 0;
	for (size_t i = 0; i < size; i++)
	{
		total += inNum[i];
	}
	return total;
}

double average(double inNum[], int size)
{
	double total = suma(inNum, size);
	double avarage = total / size;
	return avarage;
}