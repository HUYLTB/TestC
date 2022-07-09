#ifndef __SHAPEFATORY_H__
#define __SHAPEFATORY_H__
#include"../Cricle/Circle.h"
#include "../Triangle/Triangle.h"
#include "../Rectangle/Rectangle.h"
#include "../Ellips/Ellipse.h"
#include"../ToInteger/ToInteger.h"
#include<list>
#include<fstream>

//Tạo class ShapeFatory để generate các Shape
////
class ShapeFatory
{
public:
    ShapeFatory(){}//contructor
    Shape* createShape(int type, const std::string& s);
	std::list<Shape*> readShapesFromFile(const std::string& filename);
	void saveShapesToFile(const std::string& filename, const std::list<Shape*>& shapes);
    ~ShapeFatory(){}//decontructor
};

#endif // __SHAPEFATORY_H__