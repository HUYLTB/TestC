#ifndef __POINT_H__
#define __POINT_H__
#include<string>
#include<iostream>
#include<math.h>
#include<list>
#include<fstream>
class Point{
	private:
		int x,y;
	public:
        Point(){;}//contructor
        Point(Point &p)//copy contructor
        {	x=p.x;
			y=p.y;
        }
        int getx()
        {
            return x;
        }
        int gety()
        {
            return y;
        }
        void setx(int x)
        {
            this->x=x;
        }
        void sety(int y)
        {
            this->y=y;
        }
        virtual void set()
        {
			std::cout<<"Nhap vao toa do x= ";std::cin>>this->x;
			std::cout<<"Nhap vao toa do y= ";std::cin>>this->y;
		}
        virtual void get()
        {
			std::cout<<"("<<this->x<<","<<this->y<<")";
		}
        Point operator+(Point &p2){;}//operator+
        Point operator-(Point &p2){;}//operator-
        Point& operator+=(Point&p){;}//operator+=
        Point& operator-=(Point&b){;}//operator-=
        float distance(Point &p1,Point &p2){;}//tinh khoan cách
        float dotProduct(Point& p1,Point &p2){;}

};
#endif // __POINT_H__