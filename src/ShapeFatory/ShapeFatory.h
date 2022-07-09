#ifndef __SHAPEFATORY_H__
#define __SHAPEFATORY_H__
#pragma one
#include"../Shape/Shape.h"
//#include"../Point/Point.h"
#include"../Cricle/Circle.h"
#include "../Triangle/Triangle.h"
#include "../Rectangle/Rectangle.h"
#include "../Ellips/Ellips.h"
//Tạo class ShapeFatory để generate các Shape
////
class ShapeFatory:public Shape
{
public:
    ShapeFatory(/* args */);//contructor
    Shape* createShape(int type, const std::string& s);
	std::list<Shape*> readShapesFromFile(const std::string& filename);
	void saveShapesToFile(const std::string& filename, const std::list<Shape*>& shapes);
    ~ShapeFatory(){;};//decontructor
};

#endif // __SHAPEFATORY_H__