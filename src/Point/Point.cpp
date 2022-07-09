#include"Point.h"

Point Point::operator+(Point&p2)
{
    Point kq;
    kq.x=x+p2.x;
    kq.y=y+p2.y;
    return kq;
}
Point Point::operator-(Point&p2)
{
    Point kq;
    kq.x=x-p2.x;
    kq.y=y-p2.y;
    return kq;
}
Point& Point::operator+=(Point& p2)
{
    x=x+p2.x;
    y=y+p2.y;
    return *this;
}
Point& Point::operator-=(Point& p2)
{
    x=x-p2.x;
    y=y-p2.y;
    return *this;
}
float Point::distance(Point &pB)
{
    float a;
	return a=sqrt((x-pB.x)*(x-pB.x)+(y-pB.y)*(y-pB.y));
}
float Point::dotProduct(Point&p1,Point&p2)
{
    float kq;
	return kq=p1.x*p2.x+p1.y+p2.y;
}


