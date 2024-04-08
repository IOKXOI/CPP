#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float	ab = 0;
	float	bc = 0;
	float	ca = 0;

	ab = (((a.getX() - point.getX()) * (a.getY() - point.getY())) - ((b.getX() - point.getX()) * (b.getY() - point.getY())));
	bc = (((b.getX() - point.getX()) * (b.getY() - point.getY())) - ((c.getX() - point.getX()) * (c.getY() - point.getY())));
	ca = (((c.getX() - point.getX()) * (c.getY() - point.getY())) - ((a.getX() - point.getX()) * (a.getY() - point.getY())));
	std::cout << ab << " " << bc << " " << ca << std::endl;
	return (ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0);
}

