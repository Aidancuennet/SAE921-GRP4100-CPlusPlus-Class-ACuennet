#include <iostream>
#include <random>

#include "Gun.h"
#include "guns.h"

int main()
{
	Guns gun = Guns(2);

	std::cout << "Gun loaded" << std::endl;

	gun.spinBarrel();

	std::cout << "bullets randomized" << std::endl;

	std::string buffer;

	while (true)
	{
		std::cout << "press any button to shoot" << std::endl;

		std::cin >> buffer;

		if (gun.shoot())
		{
			std::cout << "BOOM !";
			break;
		}

		std::cout << "click" << std::endl;
	}
	
	Guns::Guns(int bullets)
{
	if (bullets > 10)
	{
		std::cout << "Too many bullets!";
		return;
	}

	bool inserted = false;
	while (bullets > 0)
	{
		do
		{
			int chamber = randChamber(eng);
			if (chambers[chamber] == false)
			{
				inserted = true;
				bullets--;
				chambers[chamber] = true;
			}
		} while (!inserted);
	}
}

void Guns::spinBarrel()
{
	currentChamber = randChamber(eng);
}

bool Guns::shoot()
{
	bool shoot = chambers[currentChamber];

	currentChamber = (currentChamber + 1) % 10;

	return shoot;
}
}


