#pragma once
#include "Car.h" //���

class SportCar : public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;
		else SportCar::speedUp();
	}
};