#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include"../Utils/Utils.h"
#include"../Shape/Shape.h"
#include"../Point/Point.h"
class Rectangle:public Shape{
	private:
	Point p1;
	float width,height;
	public:
        Rectangle(){}
        //chu vi chu nhat
	    float getPerimeter() override
        {
            return (width+height)*2;
        }
        //dien tich chu nhat
        float getArea() override
        {
            return (width*height);
        }
        Rectangle* fromString(const std::string& s) override;
        std::string toString() override;
};
#endif // __RECTANGLE_H__