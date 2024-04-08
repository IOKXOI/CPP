#include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(const Point &obj);
		Point &operator=(const Point &obj);
		~Point();
		Point(const float x, const float y);
		float getX(void) const;
		float getY(void) const;

	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
