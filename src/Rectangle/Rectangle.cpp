#include"Rectangle.h"
//#include<iostream>
//#include<string.h>
//#include"../Point/Point.h"
//doc file data va dua vao cac diem tam giac , 3 dinh
Rectangle* Rectangle::fromString(const std::string& s)
{
	int i = 1,n = s.length(),tamp = 0;//vi tri, chiêu dai chuỗi,tamp luu vi tri
	while (i <= 4)
	{
		std::string x = "";
		do
		{
			x =x+ s[tamp++];
		} while ((tamp < n) && (s[tamp] != ' '));
		tamp++;
		switch (i)
		{
		case 1:
			p1.setx(chint(x));
			break;

		case 2:
			p1.sety(chint(x));
			break;

		case 3:
			width = chint(x);
			break;
		case 4:
			 height= chint(x);
			break;
		default:
			break;
		}
		i++;
	}

	return this;
};
//lay ket qua,noi chuoi luu lai vao file
std::string Rectangle::toString()
{
	return "1 "+ std::to_string(p1.getx()) + " " + std::to_string(p1.gety()) + " "
		+ std::to_string(width) + " " + std::to_string(height) + "\tPerimeter: " + std::to_string(getPerimeter()) + "\tArea: " + std::to_string(getArea());
};