#include "Rectangle.h"

Rectangle::Rectangle(const double& length, const double& width)
{
	set_correct_length(length);
	set_correct_width(width);
}

double Rectangle::get_area()const
{
	return this->width * this->length;
}

double Rectangle::get_perimeter()const
{
	return 2 * this->length + 2 * this->length;
}

void Rectangle::set_correct_length(const double length)
{
	if (length < 0)
	{
		throw invalid_argument("incorrect length");
	}
	this->length = length;
}

void Rectangle::set_correct_width(const double width)
{
	if (width < 0)
	{
		throw invalid_argument("incorrect width");
	}
	this->width = width;
}
