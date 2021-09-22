#include <iostream>
#include <array>

constexpr int SCORES_LENGTH = 5;


int main()
{
	std::array<int, 10> values = {};

	srand(time(NULL));
	for (int i( 0 ); i < values.size(); ++i)
	{
		values[i] = rand() % 21;
		srand(values.at(i));
	}

	for(auto myValue : values)
	{
		std::cout << myValue << '\t';
	}
	
}

