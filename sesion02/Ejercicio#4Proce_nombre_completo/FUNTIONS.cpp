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


	int fName = 0, lName = 0, nVowels = 0;

	for (size_t i = 0; i < name.length(); i++)
	{
		if (name[i] == ' ')
		{
			fName = i;
			break;
		}

	}
	
	lName = fName;
	
	for (size_t i = 0; i < name.length(); i++)
	{
		if (lName < name.length()) {
			lName += 1;
		}

		if (name[lName] == ' ')
		{
			lName = i;	
			break;
		}

  	}
		
	for (size_t i = 0; i < name.length(); i++)
	{
		if( name[i] == 'A' || name[i] == 'a' ||
			name[i] == 'E' || name[i] == 'e' ||
			name[i] == 'I' || name[i] == 'i' ||
			name[i] == 'O' || name[i] == 'o' ||
			name[i] == 'U' || name[i] == 'u')
		{
			nVowels++;
		}
	}
		 
		std::cout << "Primer Nombre: " << name.substr(0, fName) << std::endl;
		std::cout << "Primer Apellido: " << name.substr(fName += 1, lName) << std::endl;
		std::cout << "total vocales: " << nVowels << std::endl;

		for (int i = 0; i < name.length(); i++) name[i] = toupper(name[i]);

		std::cout << "En mayusculas: "  << name << std::endl;
		std::cout << "Longitud: " << name.length();
}
