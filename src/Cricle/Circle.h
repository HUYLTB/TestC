#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include"../Shape/Shape.h"
#include"../Point/Point.h"
#include"../Utils/Utils.h"
static float pi=3.14;
class Circle:public Shape
{
    private:
		Point p1;//luu tam
		float r;//ban kinh
	public:
		float getPerimeter() override
            {//chu vi hinh tron
				return (2*pi*r);
			}
		float getArea() override
            {//dien tich hinh tron
				return (pi*r*r);
			}
    	Circle* fromString(const std::string& s) override;
		std::string toString() override;

};
#endif // __CIRCLE_H__