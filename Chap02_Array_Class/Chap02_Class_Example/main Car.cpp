#include <cstdio>
#include "Car.h"
#include "SportCar.h"

void main() {
	//Car Ŭ���� ���
	Car myCar(50, "K3", 4); //���� ������ ��ü
	Car yourCar(100, "K5", 3); //���� ���� ��ü
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();
	
	//SportCar Ŭ���� ���
	SportCar scar;
	
}