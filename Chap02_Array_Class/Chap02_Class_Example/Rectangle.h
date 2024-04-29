#pragma once
#include <iostream>

class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	double getArea() {
		return width * height;
	}
	double getPerimeter() {
		return 2 * (width + height);
	}
	bool isSquare() { //정사각형인지
		return(width == height);
	}
};