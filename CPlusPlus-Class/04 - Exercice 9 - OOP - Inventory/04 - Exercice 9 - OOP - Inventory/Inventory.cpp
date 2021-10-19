#include "Inventory.h"
#include "Item.h"
#include "Potion.h"
#include "Map.h"
#include "Weapon.h"
#include "Sword.h"
#include "Bow.h"
#include "HealingPotion.h"
#include "StrengthPotion.h"
#include <iostream>

void Inventory::print()
{
	for (int i = 0; i < items.size(); i++)
	{
		auto item = items[i].get();
		std::cout << i << ": ";
		if (dynamic_cast<HealthPotion*>(item) != nullptr)
			std::cout << "Health potion." << std::endl;
		else if (dynamic_cast<ForcePotion*>(item) != nullptr)
			std::cout << "Force potion." << std::endl;
		else if (dynamic_cast<Bow*>(item) != nullptr)
			std::cout << "Bow." << std::endl;
		else if (dynamic_cast<Sword*>(item) != nullptr)
			std::cout << "Sword." << std::endl;
		else if (dynamic_cast<Map*>(item) != nullptr)
			std::cout << "Map." << std::endl;
	}
}

void Inventory::add(std::unique_ptr<Item> ptr)
{
	items.emplace_back(std::move(ptr));
}

void Inventory::use(int index)
{
	items.at(index)->use();
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Sta