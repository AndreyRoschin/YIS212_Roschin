#include"Cursor.h"

void Cursor::set_correct_coordinates(const int coordinates_x, const int coordinates_y)
{
	if (coordinates_x >= START_SCREEN_X || coordinates_x <= END_SCREEN_X || coordinates_y >= START_SCREEN_Y || coordinates_y <= END_SCREEN_Y)
	{
		throw invalid_argument("Incorrect coordinates");
		this->coordinates_x = coordinates_x;
		this->coordinates_y = coordinates_y;
	}
	this->coordinates_x = coordinates_x;
	this->coordinates_y = coordinates_y;
}

void Cursor::set_correct_cursor_size(const int cursor_size)
{
	if (cursor_size < MIN_CURSOR_SIZE || cursor_size > MAX_CURSOR_SIZE )
	{
		throw invalid_argument("Incorrect size");
	}
	this->cursor_size = cursor_size;
}

void Cursor::set_correct_cursor_type(const string& cursor_type)
{
	if (cursor_type == "horizontal" || cursor_type == "vertical")
	{
		throw invalid_argument("Cursor must be horizontal or vertical");
		this->cursor_type = cursor_type;
	}
	this->cursor_type = cursor_type;
}

Cursor::Cursor(const int coordinates_x, const int coordinates_y, const int cursor_size, const string& cursor_type, const bool cursor_visibility)
{
	set_correct_coordinates(coordinates_x, coordinates_y);
	set_correct_cursor_size(cursor_size);
	set_correct_cursor_type(cursor_type);
	this->cursor_visibility = cursor_visibility;
}

Cursor::~Cursor() = default;

Cursor::Cursor(const Cursor& ref_Cursor) = default;

unsigned int Cursor::get_coordinates_x() const
{
	return coordinates_x;
}

unsigned int Cursor::get_coordinates_y() const
{
	return coordinates_y;
}

unsigned int Cursor::get_cursor_size() const
{
	return cursor_size;
}

string Cursor::get_cursor_type() const
{
	return cursor_type;
}

bool Cursor::get_cursor_visibility() const
{
	return cursor_visibility;
}

void Cursor::set_coordinates(const unsigned int& coordinates_x, const unsigned int& coordinates_y)
{
	set_correct_coordinates(coordinates_x, coordinates_y);
}

void Cursor::set_cursor_size(const unsigned int& cursor_size)
{
	set_correct_cursor_size(cursor_size);
}

void Cursor::set_cursor_type(const string& cursor_type)
{
	set_correct_cursor_type(cursor_type);
}

void Cursor::set_cursor_visibility(const bool& cursor_visibility)
{
	if (cursor_visibility)
	{
		this->cursor_visibility = cursor_visibility;
	}
	this->cursor_visibility = cursor_visibility;
}

ostream& operator<<(ostream& out, const Cursor& cur)
{
	out << "Cursor location: " << cur.get_coordinates_x() << " " << cur.get_coordinates_y() << endl;
	out << "Cursor size: " << cur.get_cursor_size() << endl;
	out << "Cursor type: " << cur.get_cursor_type() << endl;
	out << "Cursor visibility: " << cur.get_cursor_visibility() << endl;
	return out;
}
