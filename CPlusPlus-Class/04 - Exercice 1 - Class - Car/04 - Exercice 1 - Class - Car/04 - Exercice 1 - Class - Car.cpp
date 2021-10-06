#include <iostream>
#include "Car.h"
int main()
{
	Car firstCar;
	Car secondCar;

	firstCar.setBrand("Ford");
	firstCar.setModel("Mustang");
	firstCar.sethorsePower(300);
	std::cout << firstCar.toString() << std::endl;
	
	secondCar.setBrand("Fiat");
	secondCar.setModel("Panda");
	secondCar.sethorsePower(100);
	std::cout << secondCar.toString() << std::endl;
	
}
