/*
 *      Author: MaksiKutrolli
 */

//Changed all Point2DSTL to Point2D - Maria Psomas

#ifndef POINT2D_H_
#define POINT2D_H_

#include <iostream>
using namespace std;

class Point2D{
	private:
		double x, y;

	public:
		Point2D(){

		}

		Point2D(double xcoord, double ycoord)
		{
			x = xcoord;
			y = ycoord;
		}

		double getX() const { return x; }
		double getY() const { return y; }
		friend ostream& operator<<(ostream& out, const Point2D& q)
		{
			out << q.getX() << " " << q.getY();
			return out;
		}
};


class LeftRight
{
	public:
		bool operator()(const Point2D& p, const Point2D& q) const
		{
			return p.getX() < q.getX();
		}
};

//The following class was written by Maria Psomas
class BottomTop
{
	public:
		bool operator()(const Point2D& s, const Point2D& t) const
		{
			return s.getY() < t.getY();
		}
};


#endif /* POINT2DSTL_H_ */
