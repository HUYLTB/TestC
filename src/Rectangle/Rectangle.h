#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#pragma once
#include"../Shape/Shape.cpp"
class Rectangle:public Shape{
	private:
	Point p1;
	float width,height;
	public:
        Rectangle(){}
	    virtual float getPerimeter()
        {//chu vi chu nhat
                return (width+height)*2;
        }
    virtual float getArea()
        {//dien tich chu nhat
            return (width*height);
        }
    virtual Rectangle* fromString(const std::string& s);
	virtual std::string toString();
};
#endif // __RECTANGLE_H__