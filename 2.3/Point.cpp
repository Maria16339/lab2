#include "Point.h"
Point::Point()//конструктор за умовчанням(без параметрів)
{
	x = 0;
	y = 0;
}

Point::Point(double a, double b) //конструктор ініціалізації
{
	x = a;
	y = b;
}


Point::Point(const Point& A)//конструктор копіювання
{
	x = A.x;
	y = A.y;
}

ostream& operator << (ostream& out, const Point& A)//вивід на екран(перевантаженння операції "виводу")
{
	return out << string(A);
}

istream& operator >>(istream& in, Point& A)//введення з клавіатури(перевантаженння операції "вводу")
{
	cout << "Enter x: "; in >> A.x;
	cout << "Enter y: "; in >> A.y;
	cout << endl;
	return in;
}

Point::operator string() const //приведення типу – перетворення у літерний рядок
{
	stringstream ss;
	ss << "x = " << x << "  y = " << y << endl;
	return ss.str();
}


void Point::movingThePoint_X()
{
	float rx;
	cin >> rx;
	x += rx;
	cout << x;
	toString();
	
}

void Point::movingThePoint_Y()
{
	float ry;

	cin >> ry;
	y += ry;
	cout << y;
	toString();
	cout << endl;
	cout << " Distance: " << distanceBetweenPoints() << endl;
}
string Point::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}
Point& Point::operator --()//перевантаження операції "дикременту"(префіксна форма)
{
	--x;
	return *this;
}

Point& Point::operator ++()//перевантаження операції "інкременту"(префіксна форма)
{
	++x;
	return *this;
}

Point Point::operator --(int)//перевантаження операції "дикременту"(постфіксна форма)
{
	Point tmp(*this);
	y--;
	return tmp;
}

Point Point::operator ++(int)//перевантаження операції "інкременту"(постфіксна форма)
{
	Point tmp(*this);
	y++;
	return tmp;
}