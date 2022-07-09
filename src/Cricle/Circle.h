#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#pragma once
#include"../Shape/Shape.h"
//#include"../Point/Point.h"
static float pi=3.14;
class Circle:public Shape
{
    private:
		Point p1;//luu tam
		float r;//ban kinh
	public:
		virtual float getPerimeter()
            {//chu vi hinh tron
				return (2*pi*r);
			}
		virtual float getArea()
            {//dien tich hinh tron
				return (pi*r*r);
			}
        virtual Circle* fromString(const std::string& s);
	    virtual std::string toString();

};
#endif // __CIRCLE_H__