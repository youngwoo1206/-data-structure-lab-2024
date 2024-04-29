#pragma once
#pragma once
#include <iostream> //input output 쉽게 사용 (cout사용시 필요)
#include <string> //문자열
//#include <vector>
using namespace std; // std 라이브러리 namespasce 설정 - include와 std를 생략할 수 있게 해줌

// SmartHome
class SmartHome {
private:
    //std::vector1
    // 클래스 변수들(member variable, attribute, filed) 시험 무조건
    string owner;
    int temperature;
    int humidity;
    bool security;
public:
    //클래스 함수들(member function, method) 시험 무조건
    //생성자
    SmartHome(string owner, int temperature, int humidity, bool security) { //매개변수(parameter) owner, temperature...
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //위 생성자의 또 다른 표기법
    //SmartHome(string o, int t, int h, bool sec)
    //    :temperature(t), humidity(h), security(sec) {
    //    strcpy(owner, o); //인수(argument) 실제 호출 값들
    //} 

    //소멸자
    ~SmartHome() {}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() {
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << "집주인: " << this->owner << endl; //nedl 줄바꿈
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};