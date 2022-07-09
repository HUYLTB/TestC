#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#include"../Point/Point.h"
#include"../Shape/Shape.h"
#include"../ToInteger/ToInteger.h"
class Triangle:public Shape
{
	private: 
	Point p1,p2,p3;
	public:
		float getPerimeter() override
        {//tinh chu vi tam giac tu 3 diem
			float a,b,c;
			a=p1.distance(p2);
			b=p1.distance(p3);
			c=p2.distance(p3);
			return a+b+c;
		}
		float getArea() override
        {
		//dien tich tam giac tu 3 diem
			float a,b,c,p;
			a=p1.distance(p2);
			b=p1.distance(p3);
			c=p2.distance(p3);
			p=(a+b+c)/2;
			p=p*(p-a)*(p-b)*(p-c);
			return sqrt(p);
		}
        Triangle* fromString(const std::string& s) override;
	    std::string toString() override;

};
#endif // __TRIANGLE_H__