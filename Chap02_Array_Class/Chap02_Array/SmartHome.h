#pragma once
#pragma once
#include <iostream> //input output ���� ��� (cout���� �ʿ�)
#include <string> //���ڿ�
//#include <vector>
using namespace std; // std ���̺귯�� namespasce ���� - include�� std�� ������ �� �ְ� ����

// SmartHome
class SmartHome {
private:
    //std::vector1
    // Ŭ���� ������(member variable, attribute, filed) ���� ������
    string owner;
    int temperature;
    int humidity;
    bool security;
public:
    //Ŭ���� �Լ���(member function, method) ���� ������
    //������
    SmartHome(string owner, int temperature, int humidity, bool security) { //�Ű�����(parameter) owner, temperature...
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //�� �������� �� �ٸ� ǥ���
    //SmartHome(string o, int t, int h, bool sec)
    //    :temperature(t), humidity(h), security(sec) {
    //    strcpy(owner, o); //�μ�(argument) ���� ȣ�� ����
    //} 

    //�Ҹ���
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
        cout << "������: " << this->owner << endl; //nedl �ٹٲ�
        cout << "�µ�: " << this->temperature << "��" << endl;
        cout << "����: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};