#include "LeapYear.h"
bool is_leap_year(int year)
{
	return !(year % 4 != 0 && (year % 100 == 0 || year % 400 != 0));
}
bool is_leap_year2(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw 1;
	}
}
bool is_leap_year3(int year)
{
	if (year > 0)
	{
		throw invalid_argument{ "Error! Year less than zero, standard exception" };
		is_leap_year(year);
	}
	is_leap_year(year);
}
bool is_leap_year4(int year)
{
	if (year > 0)
	{
		throw Empty_class();
	}
	is_leap_year(year);
}
bool is_leap_year5(int year)
{
	if (year > 0)
	{
		throw independent_class("Error! Year is equal to / less than 0, independent class with function parameter fields");
	}
	is_leap_year(year);
}
bool is_leap_year6(int year)
{
	if (year > 0)
	{
		throw successor_class("Error! Year is equal to / less than 0, successor class");
	}
	is_leap_year(year);
}
