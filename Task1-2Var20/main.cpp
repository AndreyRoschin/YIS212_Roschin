#include"Cursor.h"

int main()
{
	Cursor cur(5, 500, 8, "horizontal", 0);
	cout << cur.get_cursor_type() << endl;
	cout << cur << endl;
}