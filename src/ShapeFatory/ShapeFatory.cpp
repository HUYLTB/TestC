#include"ShapeFatory.h"
//tạo 1 shape với type Triangle/Rectangle/Circle/Ellips
Shape* ShapeFatory::createShape(int type, const std::string& s)
{
	Shape* Shapexample = nullptr;
	switch (type)
	{
	case 0:
		Shapexample = new Triangle;
		Shapexample->fromString(s);
		break;
	case 1:
		Shapexample = new Rectangle;
		Shapexample->fromString(s);
		break;
	case 2:
		Shapexample = new Circle;
		Shapexample->fromString(s);
		break;
	case 3:
		Shapexample = new Ellipse;
		Shapexample->fromString(s);
		break;
	default:
		break;
	}
	return Shapexample;
};
//tạo list các shape bằng cách đọc data từ file, mỗi dòng trong file là 1 Shape
//
//
std::list<Shape*> ShapeFatory::readShapesFromFile(const std::string& filename)
{
	std::list<Shape*> C;
	std::ifstream FileDemo(filename); 
	if (FileDemo.is_open())
	{
		std::string line;
		while (std::getline(FileDemo, line))
		{
			std::string type = line.substr(0, 1);
			C.push_back(createShape(chint(type), line.substr(2, line.length() - 2)));
		}
		FileDemo.close();
	}
	return C;
};
//viet shapes ra file theo format giống khi đọc.
void ShapeFatory::saveShapesToFile(const std::string& filename, const std::list<Shape*>& shapes)
{
	std::ofstream FileDemo(filename);
	for (Shape* itr : shapes)
	{
		FileDemo << itr->toString() << "\n";
	}
	FileDemo.close();
};