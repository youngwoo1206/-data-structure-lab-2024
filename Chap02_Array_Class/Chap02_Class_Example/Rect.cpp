#include <cstdio>
#include "Rectangle.h"

int main()
{
	Rectangle r(10, 20);
	double perimeter = r.getPerimeter();
	std::cout << "Rectangle 1:" << std::endl;
	std::cout << "Area:" << r.getArea() << std::endl;
	std::cout << "Area:" << r.getArea() << std::endl;
	std::cout << "Perimeter:" << perimeter << std::endl;
	std::cout << "is Square?:" << std::boolalpha << r.isSquare() << std::endl;
}
