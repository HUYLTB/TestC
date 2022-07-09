#ifndef __POINT_H__
#define __POINT_H__
#include<string>
#include<iostream>
#include<math.h>

class Point{
	private:
		float x,y;
	public:
        Point(){}//contructor
        Point(Point &p)//copy contructor
        {	x=p.x;
			y=p.y;
        }
        float getx()
        {
            return x;
        }
        float gety()
        {
            return y;
        }
        void setx(float x)
        {
            this->x=x;
        }
        void sety(float y)
        {
            this->y=y;
        }

        Point operator+(Point &p2);//operator+
        Point operator-(Point &p2);//operator-
        Point& operator+=(Point&p);//operator+=
        Point& operator-=(Point&b);//operator-=
        float distance(Point &pB);//tinh khoan cách
        float dotProduct(Point& p1,Point &p2);
        ~Point(){}

};
#endif // __POINT_H__