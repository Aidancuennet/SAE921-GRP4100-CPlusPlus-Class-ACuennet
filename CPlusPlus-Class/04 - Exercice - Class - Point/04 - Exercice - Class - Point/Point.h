#pragma once
#include<string>
class Point
{
private:
	double x, y;

public:
	Point();

	void display();
	void fetch();

	void move(double dx, double dy);
	void distanceTo(Point destination);
	Point middleOf(Point from, Point to);
	
};

