#ifndef __ELLIPS_H__
#define __ELLIPS_H__
#include<string>
#include "../Point/Point.h"
#include"../Shape/Shape.h"
#include"../ToInteger/ToInteger.h"
#define pi 3.14
class Ellipse:public Shape{
    private:
    Point p1;
    float z,y;//ban kinh lon,nhỏ
    public:
    
        //chu vi
        float getPerimeter() override 
        {
            return (2*pi*sqrt((z*z+y*y)/2));//chu vi ellips
        }
        //dien tich
        float getArea() override 
        {
            return (pi*z*y);//dien tich ellips
        }
        Ellipse* fromString(const std::string& s) override;
        std::string toString() override;
};
#endif // __ELLIPS_H__