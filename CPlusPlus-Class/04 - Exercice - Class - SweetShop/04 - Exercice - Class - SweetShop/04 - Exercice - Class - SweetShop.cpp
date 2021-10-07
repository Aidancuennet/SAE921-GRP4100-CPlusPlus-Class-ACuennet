#include <iostream>
#include <vector>


#include "Sweets.h"

int main()
{
    /*Sweets Bag(Sweets::SweetType::applerock, 50);*/
	std::vector<Sweets> storage;
	
	storage.emplace_back(Sweets(Sweets::SweetType::applerock, 200));
	storage.emplace_back(Sweets(Sweets::SweetType::chewinggum, 100));
	storage.emplace_back(Sweets(Sweets::SweetType::lolipop, 50));

	std::cout << "do you want to buy some sweets ?" << std::endl;
	
}


