#include <iostream>
#include "Bicycle.h";
using namespace std;
void Bicycle::set_number_of_passengers(const int& number_of_passengers)
{
	if (number_of_passengers == 1)
	{
		throw invalid_argument("There must be one cyclist");
	}
	this->number_of_passengers = number_of_passengers;
}
Bicycle::Bicycle(const double average_speed, const string& model, const int number_of_passengers, const double distance)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
}
void Bicycle::set_new_distance(const double distance)
{
	set_distance(distance);
}
