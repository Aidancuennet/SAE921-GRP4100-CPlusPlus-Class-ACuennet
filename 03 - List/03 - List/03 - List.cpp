#include <iostream>
#include <list>
int main()
{
	srand(time(NULL));
    std::list<int> numbers;


	for (int i = 0; i < 12; i++)
	{
		numbers.push_back(1 + rand() % 20);
		for (auto value : numbers) {
			
		}
	}
	for (auto value : numbers)
	{
		std::cout << "value is " << value << std::endl;
	}
	
	std::list<int>::iterator it = numbers.begin();
	while(it != numbers.end())
	{
		if(*it % 2 == 0)
		{
			it = numbers.erase(it);
		}
		else
		{
			++it;
		}
		
	}
	std::cout << "---------------------------------" << std::endl;
	for (auto value : numbers) {
		std::cout << "value is " << value << std::endl;

	}
	
	 
   
	
}
