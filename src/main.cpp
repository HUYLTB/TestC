#include <iostream>
#include"ShapeFatory/ShapeFatory.h"
#include<string>
#include<fstream>
//em co lam theo cach quan li src trong dep mat va de quan li
int main()
{
	ShapeFatory ShFatory;
    ShFatory.saveShapesToFile("assets/DataNew.txt", ShFatory.readShapesFromFile("assets/data.txt"));
    return 0;
}