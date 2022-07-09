#include <iostream>
#include"ShapeFatory/ShapeFatory.h"
#include<string>
#include<fstream>
int main()
{
	ShapeFatory ShFatory;
    ShFatory.saveShapesToFile("data/DataNew.txt", ShFatory.readShapesFromFile("data/data.txt"));
    return 0;
}