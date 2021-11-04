#include"Pair.h"
#include"Rectangle.h"

int main()
{
	Rectangle rec(2, 3);
	cout << rec.get_area() << endl;
	Pair pr(5, 10);
	cout << pr.get_multiply() << endl;
}