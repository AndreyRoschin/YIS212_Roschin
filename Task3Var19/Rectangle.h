#pragma once
#include"Pair.h"

class Rectangle:public Pair
{
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	Rectangle(const double length, const double width);
	/**
	 \brief	Деструктор
	 */
	~Rectangle();
	/**
	 \brief	Получение площади
	 */
	double get_area()const;
	/**
	 \brief Получение периметра
	 */
	double get_perimeter()const;
private:
	/**
	 \brief Задание верной длины
	 */
	void set_correct_length(const double length);
	/**
	 \brief Задание верной ширины
	 */
	void set_correct_width(const double width);
	double length;
	double width;
};
