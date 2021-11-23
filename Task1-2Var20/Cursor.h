#pragma once
#include<iostream>
#include<string>
using namespace std;


class Cursor
{
public:
	/**
	 \brief	Конструктор с параметрами
	 \params coordinates_x
	 \params coordinates_y
	 \params coordinates_y
	 \params cursor_size
	 \params cursor_type
	 \params cursor_visibility
	 */
	explicit Cursor(const unsigned int& coordinates_x, const unsigned int& coordinates_y, const unsigned int& cursor_size, const string& cursor_type, const bool& cursor_visibility = true);
	/**
	 \brief	Деструктор
	 */
	~Cursor();
	/**
	 \brief Конструктор копирования
	 */
	Cursor(const Cursor& ref_Cursor);
	/**
	 \brief Перегруженый оператор вывода
	 */
	friend ostream& operator<<(ostream& out, const Cursor& cur);
	/**
	 \brief Получение координаты x
	 */
	unsigned int get_coordinates_x()const;
	/**
	 \brief Получение координаты y
	 */
	unsigned int get_coordinates_y()const;
	/**
	 \brief Получение размера курсора
	 */
	unsigned int get_cursor_size()const;
	/**
	 \brief Получение типа курсора(горизонтальный/вертикальный)
	 */
	string get_cursor_type()const;
	/**
	 \brief Получение видимости курсора
	 */
	bool get_cursor_visibility()const;
	/**
	 \brief Изменение координат
	 */
	void set_coordinates(const unsigned int& coordinates_x, const unsigned int& coordinates_y);
	/**
	 \brief Изменение размера курсора
	 */
	void set_cursor_size(const unsigned int& cursor_size);
	/**
	 \brief Изменение типа курсора
	 */
	void set_cursor_type(const string& cursor_type);
	/**
	 \brief Изменение видимости курсора
	 */
	void set_cursor_visibility(const bool& cursor_visibility);
private:
	/**
	 \brief Задание правильных значений координат
	 */
	void set_correct_coordinates(const unsigned int& coordinates_x, const unsigned int& coordinates_y);
	/**
	 \brief Задание правильных значений размера
	 */
	void set_correct_cursor_size(const unsigned int& cursor_size);
	/**
	 \brief Задание правильных значений типа курсора
	 */
	void set_correct_cursor_type(const string& cursor_type);
	unsigned int coordinates_x;
	unsigned int coordinates_y;
	unsigned int cursor_size;
	string cursor_type;
	bool cursor_visibility;
	const unsigned int START_SCREEN_X = 0;
	const unsigned int START_SCREEN_Y = 0;
	const unsigned int END_SCREEN_X = 1920;
	const unsigned int END_SCREEN_Y = 1080;
	const unsigned int MAX_CURSOR_SIZE = 15;
	const unsigned int MIN_CURSOR_SIZE = 1;
};
