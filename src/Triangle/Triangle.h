#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#pragma once
//#include"../Point/Point.h"
#include"../Shape/Shape.cpp"
class Triangle:public Shape
{
	private: 
	Point p1,p2,p3;
	public:
		virtual float getPerimeter()
        {//tinh chu vi tam giac tu 3 diem
			float a,b,c;
			a=distance(p1,p2);
			b=distance(p1,p3);
			c=distance(p2,p3);
			return a+b+c;
		}
		virtual float getArea()
        {
		//dien tich tam giac tu 3 diem
			float a,b,c,p;
			a=distance(p1,p2);
			b=distance(p1,p3);
			c=distance(p2,p3);
			p=(a+b+c)/2;
			p=p*(p-a)*(p-b)*(p-c);
			return sqrt(p);
		}
        virtual Triangle* fromString(const std::string& s);
	    virtual std::string toString();

};
#endif // __TRIANGLE_H__