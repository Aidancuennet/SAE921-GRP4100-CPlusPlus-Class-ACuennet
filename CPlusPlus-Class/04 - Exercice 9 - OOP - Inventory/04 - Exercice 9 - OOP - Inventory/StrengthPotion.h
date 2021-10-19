#pragma once

#include <iostream>

#include "Potion.h"

class ForcePotion : public Potion
{
	void drink() override { std::cout << "Force potion drank" << std::endl; }
};
