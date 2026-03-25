#include "FUNTIONS.H"

void askName()
{
	std::string name;
	std::cout << "Ingrese su nombre completo_ ";
	std::getline(std::cin, name);

	showData(name);

}

void showData(std::string name)
{
	
	int aux = 0;

	for (size_t i = 0; i < (name).length(); i++)
	{
		if (name[i] == ' ')
		{
			aux = i;
			break;
		}
	}
	
	std::cout << name.substr(0, aux);
	
}