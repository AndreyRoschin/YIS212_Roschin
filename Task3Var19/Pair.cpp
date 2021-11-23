#include "Pair.h"

Pair::Pair(const double first_number, const double second_number)
{
	this->first_number = first_number;
	this->second_number = second_number;
}

Pair::~Pair() = default;

double Pair::get_first_number()const
{
	return this->first_number;
}

double Pair::get_second_number()const
{
	return this->second_number;
}

double Pair::get_multiply()const
{
	return this->first_number * this->second_number;
}

void Pair::set_first_number(const double first_number)
{
	this->first_number = first_number;
}

void Pair::set_second_number(const double second_number)
{
	this->second_number = second_number;
}
