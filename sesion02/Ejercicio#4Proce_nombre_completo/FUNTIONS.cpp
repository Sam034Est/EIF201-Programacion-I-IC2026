#include "FUNTIONS.H"

void askName()
{
	int size = 3;
	std::string name[3] = {};

	std::cout << "Ingrese su nombre completo_ ";
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> name[i];
	}
}

void showData(std::string &name,int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0 || i == 1)
		{

		std::cout << name[i];
		
		}
	}

	int vocales;
	for (size_t i = 0; i < size; i++)
	{
		if (name[i] == 'a', 'e', 'i', 'o', 'u')
		{
			vocales += 1;
		}
	}

	
}