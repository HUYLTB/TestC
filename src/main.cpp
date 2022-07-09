#include <iostream>
#include"ShapeFatory/ShapeFatory.h"
#include<string>
#include<fstream>
int main()
{
	ShapeFatory ShFatory;
    ShFatory.saveShapesToFile("assets/DataNew.txt", ShFatory.readShapesFromFile("assets/data.txt"));
    return 0;
}