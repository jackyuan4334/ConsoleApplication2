#include "pch.h"
#include "Circle.h"


Circle::Circle()
{
	this->r = 5.0;
}

Circle::Circle(double R)
{
	this->r = R;
}

double Circle::GetR()
{
	return this->r;
}

void Circle::ChangeR(double R)
{
	std::cout << "The original r is " << GetR()<< std::endl;
	this->r = R;
	std::cout << "The r of circle is changed to " << R << std::endl;
}

double Circle::Area()
{
	return 3.14*r*r;
}

Circle::~Circle()
{
}

