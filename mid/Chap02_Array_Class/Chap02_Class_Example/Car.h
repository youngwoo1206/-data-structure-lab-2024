#pragma once
#include <cstring>

class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car(){ }
	~Car(){ }
	Car(int s, const char* n, int g)
		:speed(s), gear(g) {
		strcpy_s(name, n);
	}
	/*Car(int s, char* n, int g){
	speed=s;
	gear=g;
	strcpy(name, n);
	}
	*/
	void changeGear(int g = 4) { //default �Ű�����, �Է��� ���ٸ� g=4
		gear = g;
	}
	void setUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : ���=%d�� �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() { printf("��ü �ּ�=%x\n", this); } //this, ��ü�� �޸𸮻� �ּ�
};
