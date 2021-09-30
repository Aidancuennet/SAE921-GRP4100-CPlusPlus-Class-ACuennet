#include <iostream>
#include <vector>




int main()
{
	srand(time(NULL));
	
	std::vector <int> numbers;
	for(int i = 0; i < numbers.size(); i++)
	{
		numbers.at(i) = rand() % 20 + 1;
		std::cout << "value" << numbers.at(i) << std::endl;
		
	}

	std::vector <int>::iterator minPlace;
	int minVal = 20;
	for (std::vector<int>::iterator it = numbers.begin(); it < numbers.end(); it++)
	{
		if (minVal > *it){
			minVal = *it;
			minPlace = it;
			std::cout << "number value is " << minVal << std::endl;
			std::cout << "minimum placement is situated at emplacement :" << *minPlace << std::endl;
		}
	}
	


	
}
