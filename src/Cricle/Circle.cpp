#include"Circle.h"

//#include<string.h>
Circle* Circle::fromString(const std::string& s)
{
	int i = 1,n = s.length(),tamp = 0;//vi tri, chiêu dai chuỗi,tamp luu vi tri
	while (i <= 3)
	{
		std::string x = "";
		do
		{
			x = x+s[tamp++];
		} while ((tamp < n) && (s[tamp] != ' '));
		tamp++;
		switch (i)
		{
		case 1:
			p1.setx(Utils::chint(x));
			break;

		case 2:
			p1.sety(Utils::chint(x));
			break;

		case 3:
			r = Utils::chint(x);
			break;

		default:
			break;
		}
		i++;
	}
	return this;
};

std::string Circle::toString()
{
	return "2 " + std::to_string(p1.getx()) + " " + std::to_string(p1.gety()) + " "
		+ std::to_string(r) + "\tPerimeter: " + 
        std::to_string(getPerimeter()) + "\tArea: " + std::to_string(getArea());
};