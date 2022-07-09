#include <iostream>
#include"ShapeFatory/ShapeFatory.cpp"
#include<string.h>
#include<fstream>
int main()
{
	ShapeFatory ShFatory;
    std::list<Shape*> listshape = ShFatory.readShapesFromFile("data/data.txt");
    ShFatory.saveShapesToFile("data/DataNew.txt", listshape);
    return 0;
}