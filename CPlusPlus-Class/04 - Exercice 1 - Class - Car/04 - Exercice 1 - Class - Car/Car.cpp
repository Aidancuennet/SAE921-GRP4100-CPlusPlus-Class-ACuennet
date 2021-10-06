#include "Car.h"

std::string Car::toString()
{
	return "this car is a " + brand_ + " " + model_ + "and it's motor has a power of " + std::to_string(horsePower_);
}
