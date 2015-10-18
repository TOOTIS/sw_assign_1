#include "move.h"

Move::Move(double a = 0, double b = 0)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x: " << x << ", y: " << y << endl;
}

double Move::x() const 
{
	return x;
}

double Move::y() const 
{
	return y;
}

Move Move::add(const Move & m) const
{
	double new_x = m.x() + x;
	double new_y = m.y() + y;

	return Move(new_x, new_y);
}

void Move::reset(double a = 0, double b = 0)
{
	x = a;
	y = b;
}