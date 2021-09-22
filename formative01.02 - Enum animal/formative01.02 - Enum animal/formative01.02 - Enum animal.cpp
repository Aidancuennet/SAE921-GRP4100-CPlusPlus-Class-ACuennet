#include <iostream>

#pragma region Global
enum class Animal : char
{
	Cow,
	Horse,
	Duck,
	Wolf
};
#pragma endregion

 std::string printName(Animal animal_)
{
	switch (animal_)
	{
	case Animal::Cow:
		return "Cow";
		break;
		{
	case Animal::Horse:
		return "Horse";
		break;
		}
		{
	case Animal::Duck:
		return "Duck";
		break;
		}
		{
	case Animal::Wolf:
		return "Wolf";
		break;
		}
	default:
		return "incorrect value";
		break;
		
	}
	
}

std::string printScream(Animal animal_)
{
	switch (animal_)
	{
	case Animal::Cow:
		return "MOOOOO!!";
		break;
		{
	case Animal::Horse:
		return "NEEEEEIGH!!";
		break;
		}
		{
	case Animal::Duck:
		return "QUACK!!";
		break;
		}
		{
	case Animal::Wolf:
		return "AWOOOOO!!";
		break;
		}
	default:
		return ".............";
		break;
				
	}

}



int main()
{
	char AnimalChoice = 'y';

 	
	do {
		std::cout << "choose which animal corresponds with each sound !" << std::endl;
		std::cout << "Cow (c)" << std::endl;
		std::cout << "Horse (h)" << std::endl;
		std::cout << "Duck (d)" << std::endl;
		std::cout << "Wolf (w)" << std::endl;
		std::cout << "anything else if you dont know" << std::endl;

		std::cin >> AnimalChoice;
		printScream(static_cast<Animal>(AnimalChoice));
		if (AnimalChoice == 'y')
		{
			printScream(Animal::Cow);
			printScream(Animal::Horse);
			printScream(Animal::Duck);
			printScream(Animal::Wolf);
		}
	} while (AnimalChoice);
} 
