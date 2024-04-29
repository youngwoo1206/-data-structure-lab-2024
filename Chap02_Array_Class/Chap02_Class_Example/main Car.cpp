#include <cstdio>
#include "Car.h"
#include "SportCar.h"

void main() {
	//Car 클래스 사용
	Car myCar(50, "K3", 4); //변수 미지정 객체
	Car yourCar(100, "K5", 3); //변수 지정 객체
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();
	
	//SportCar 클래스 사용
	SportCar scar;
	
}