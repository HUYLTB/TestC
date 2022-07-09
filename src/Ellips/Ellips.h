#ifndef __ELLIPS_H__
#define __ELLIPS_H__
//#pragma once
#include"../Shape/Shape.cpp"
#define pi 3.14
class Ellipse:public Shape{
    private:
    Point p1;
    float x,y;//ban kinh lon,nhỏ
    public:
        virtual float getPerimeter()//chu vi
        {
            return (2*pi*sqrt((x*x+y*y)/2));//chu vi ellips
        }
        virtual float getArea()//dien tich
        {
            return (pi*x*y);//dien tich ellips
        }
    virtual Ellipse* fromString(const std::string& s);
	virtual std::string toString();
};
#endif // __ELLIPS_H__