#include"Ellips.h"
//#include<string.h>
//doc file data va gan diem tam,bán kinh lon va nho
Ellipse* Ellipse::fromString(const std::string& s)
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
			x = chint(x);
			break;
		case 4:
			y = chint(x);
			break;
		default:
			break;
		}
		i++;
	}

	return this;
};
//lay ket qua,noi chuoi luu lai vao file, dien tich,diem,chu vi
std::string Ellipse::toString()
{
	return "3 " + std::to_string(p1.getx()) + " " + std::to_string(p1.gety()) + " "
		+ std::to_string(x) + " " + std::to_string(y) + "\tPerimeter: " + 
        std::to_string(getPerimeter()) + "\tArea: " + std::to_string(getArea());
};