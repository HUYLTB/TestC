#include"Triangle.h"
//#include<string.h>
Triangle* Triangle::fromString(const std::string& s)
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
			p1.setx(ToInteger::Toint(x));
			break;
		case 2:
			p1.sety(ToInteger::Toint(x));
			break;
		case 3:
			p2.setx(ToInteger::Toint(x));
			break;
		case 4:
			 p2.sety(ToInteger::Toint(x));
			 break;
		case 5:
			p3.setx(ToInteger::Toint(x));
			break;
		case 6:
			 p3.sety(ToInteger::Toint(x));
			break;
		default:
			break;
		}
		i++;
	}

	return this;
};
//lay ket qua,noi chuoi luu lai vao file
std::string Triangle::toString()
{
	return "0"+ std::to_string(p1.getx()) + " " + std::to_string(p1.gety()) + " "
		+ std::to_string(p2.getx()) + " " + std::to_string(p2.gety()) +" "+
		 std::to_string(p1.getx()) + " " + std::to_string(p1.gety())+" "
		 +"\tPerimeter: " + std::to_string(getPerimeter()) + "\tArea: " + std::to_string(getArea());
};