#include"Point.h"
Point Point::operator+(Point&p2)
{
    Point kq;
    kq.x=this->x+p2.x;
    kq.y=this->y+p2.y;
    return kq;
}
Point Point::operator-(Point&p2)
{
    Point kq;
    kq.x=this->x-p2.x;
    kq.y=this->y-p2.y;
    return kq;
}
Point& Point::operator+=(Point& p2)
{
    this->x=this->x+p2.x;
    this->y=this->y+p2.y;
}
Point& Point::operator-=(Point& p2)
{
    this->x=x-p2.x;
    this->y=y-p2.y;
}
float Point::distance(Point &p1,Point &p2)
{
    float a;
	return a=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
float Point::dotProduct(Point&p1,Point&p2)
{
    float kq;
	return kq=p1.x*p2.x+p1.y+p2.y;
}


