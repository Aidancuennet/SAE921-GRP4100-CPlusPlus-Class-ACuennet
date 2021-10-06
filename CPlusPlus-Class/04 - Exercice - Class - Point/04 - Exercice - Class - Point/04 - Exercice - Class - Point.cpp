#include <iostream>
#include "Point.h"
int main()
{
	Point objPoint;
	objPoint.fetch();

	Point pointDistance;
	std::cout << "you will fetch another point to alculate the distance of " << std::endl;
	pointDistance.fetch();
	
}

