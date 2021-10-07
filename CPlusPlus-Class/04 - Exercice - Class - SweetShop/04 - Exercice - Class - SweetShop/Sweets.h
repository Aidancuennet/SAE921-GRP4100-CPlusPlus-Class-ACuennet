#pragma once
#include <iostream>
#include <string>
class Sweets
{
public:
	enum class SweetType
	{
		gummybear,
		chewinggum,
		applerock,
		lolipop,
		
	};

	std::string getSweetName(SweetType type)
	{
	
	}
private:
	SweetType type_;
	int quantity;

public:
	Sweets(SweetType newtype, int quantity);
	Sweets();

	void buySweets(int quantitytobuy)
	{
		if (quantitytobuy < quantity)
		{
			quantity -= quantitytobuy;
		}
		else
		{
			std::cout << "you asked for " << quantitytobuy << "Sweets" << std::endl;
			std::cout << "there are " << quantity << "sweets left" << std::endl;
			std::cout << "the bag is now empty" << std::endl;

			quantity = 0;
		}
	}
};





