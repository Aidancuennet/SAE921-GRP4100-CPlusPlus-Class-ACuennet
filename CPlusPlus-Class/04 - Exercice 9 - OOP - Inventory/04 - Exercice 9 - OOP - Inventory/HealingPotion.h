#pragma once

#include <iostream>

#include "Potion.h"

class HealthPotion : public Potion
{
	void drink() override { std::cout << "Health potion drank" << std::endl; }
};