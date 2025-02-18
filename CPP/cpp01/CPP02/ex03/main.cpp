#include "Fixed.hpp"


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A_total = 0.5 * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));

	float A1 = 0.5 * (point.x * (b.y - c.y) + b.x * (c.y - point.y) + c.x * (point.y - b.y));
	float A2 = 0.5 * (a.x * (point.y - c.y) + point.x * (c.y - a.y) + c.x * (a.y - point.y));
	float A3 = 0.5 * (a.x * (b.y - point.y) + b.x * (point.y - a.y) + point.x * (a.y - b.y));

	return (A_total == (A1 + A2 + A3))
}

int main( void )
{
	const Point	a(12, 45);
	const Point	b(1,12);
	const Point	c(25, 65);
	const Point	point(13, 46);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is not inside the triangle." << std::endl;

	return 0;

}