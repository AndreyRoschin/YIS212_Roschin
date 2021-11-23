#pragma once
#include<iostream>
using namespace std;

class Pair
{
public:
	/**
	 \brief	Конструктор с параметрами
	 \params first_number
	 \params second_number
	 */
	Pair(const double first_number, const double second_number);
	/**
	 \brief Деструктор
	 */
	virtual ~Pair();
	/**
	 \brief Получение первого числа
	 */
	double get_first_number()const;
	/**
	 \brief Получение второго числа
	 */
	double get_second_number()const;
	/**
	 \brief Получение произведения чисел
	 */
	double get_multiply()const;
	/**
	 \brief Изменение первого числа
	 */
	void set_first_number(const double first_number);
	/**
	 \brief Изменение второго числа
	 */
	void set_second_number(const double second_number);
private:
	double first_number;
	double second_number;
};

