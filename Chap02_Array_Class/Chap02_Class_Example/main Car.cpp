#include <cstdio>
#include "Car.h"
#include "SportCar.h"

void main(){
	//Car Ŭ���� ���
	Car Car1(200, "K7", 8);
	Car myCar(50, "K3", 4); 
	Car yourCar(100, "K5", 3); //���� ���� ��ü
	Car1.display();
	myCar.display();
	myCar.setUp();
	myCar.changeGear(5);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();
	
	//SportCar Ŭ���� ���
	SportCar sCar;
	sCar.display();
	sCar.setTurbo(true);
	sCar.speedUp();
	sCar.display();
	sCar.whereAmI();
}