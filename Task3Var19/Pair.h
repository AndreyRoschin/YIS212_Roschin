#pragma once
#include<iostream>
using namespace std;

class Pair
{
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	Pair(const double& first_number, const double& second_number);
	/**
	 \brief Деструктор
	 */
	~Pair();
	/**
	 \brief Получение первого числа
	 */
	double get_first_number();
	/**
	 \brief Получение второго числа
	 */
	double get_second_number();
	/**
	 \brief Получение произведения чисел
	 */
	double get_multiply();
	/**
	 \brief Изменение первого числа
	 */
	void set_first_number(const double& first_number);
	/**
	 \brief Изменение второго числа
	 */
	void set_second_number(const double& second_number);
private:
	double first_number;
	double second_number;
};

