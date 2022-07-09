#ifndef __SHAPE_H__
#define __SHAPE_H__
#include<string>
class Shape
{
	public:
		Shape(){}
		~Shape(){}
		virtual float getPerimeter()=0;//ham ao tinh chu vi
		//ham tinh chu vi
		virtual float getArea()=0;//ham ao tinh dien tich
		//ham tinh dien tich
		virtual Shape* fromString(const std::string& s)=0;//ham tra ve hinh
		virtual std::string toString()=0;//ham doc hinh sang string
};
#endif // __SHAPE_H__