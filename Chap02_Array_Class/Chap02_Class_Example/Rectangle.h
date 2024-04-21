#pragma once
#include <iostream>

class Rectangle {//Ŭ������
private:
	double width; //�������, �ʵ�
	double height;

public:
	Rectangle(double w, double h) {//�Ű�����
		width = w;
		height = h;
	}
	double getArea() {//����Լ�, �޼ҵ�
		return width * height;
	}
	double getPerimeter() {
		return 2 * (width + height);
	}
	bool isSquare() { //���簢������, bool ������ �Ǻ� �ڷ���
		return(width == height);
	}
};