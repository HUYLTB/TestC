#ifndef __SHAPE_H__
#define __SHAPE_H__
#pragma once
#include"../Point/Point.cpp"

class Shape:public Point
{
    protected:
		int chint(const std::string& s);//chuyen string sang int
	public:
		Shape(){;}//ham tao
		virtual ~Shape(){;}//ham huy
		virtual float getPerimeter(){//ham ao tinh chu vi
		}//ham tinh chu vi
		virtual float getArea(){//ham ao tinh dien tich
		}//ham tinh dien tich
		virtual Shape* fromString(const std::string& s) {;}//ham tra ve hinh
		virtual std::string toString() { ; };//ham doc hinh sang string
};

#endif // __SHAPE_H__