#ifndef __ELLIPS_H__
#define __ELLIPS_H__
#include<string>
#include "../Point/Point.h"
#include"../Shape/Shape.h"
#include"../Utils/Utils.h"
#define pi 3.14
class Ellipse:public Shape{
    private:
    Point p1;
    float x,y;//ban kinh lon,nhỏ
    public:
    
        //chu vi
        float getPerimeter() override 
        {
            return (2*pi*sqrt((x*x+y*y)/2));//chu vi ellips
        }
        //dien tich
        float getArea() override 
        {
            return (pi*x*y);//dien tich ellips
        }
        Ellipse* fromString(const std::string& s) override;
        std::string toString() override;
};
#endif // __ELLIPS_H__