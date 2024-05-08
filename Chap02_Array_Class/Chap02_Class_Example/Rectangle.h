#pragma once
#include <iostream>

class Rectangle {//클래스명
private:
	double width; //멤버변수, 필드
	double height;

public:
	Rectangle(double w, double h) {//매개변수
		width = w;
		height = h;
	}
	double getArea() {//멤버함수, 메소드
		return width * height;
	}
	double getPerimeter() {
		return 2 * (width + height);
	}
	bool isSquare() { //정사각형인지, bool 참거짓 판별 자료형
		return(width == height);
	}
};