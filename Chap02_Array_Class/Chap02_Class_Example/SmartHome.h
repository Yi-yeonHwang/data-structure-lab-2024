#pragma once
#include <iostream> //input ouput ���� ���
#include <string> //���ڿ�
using namespace std; //std ���̺귯�� namespace ����

// SmartHome
class SmartHome {
private:
    // Ŭ���� ������ member variable, attribute, field
    string owner; //���ڿ�
    int temperature; //������
    int humidity;
    bool security; //true or false
public:
    // Ŭ���� �Լ��� member function or class method
    // ������
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner; //�ʱⰪ ����
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    /*
    SmartHome(string owner, int ...) // �Ű�����parameter
        : temperature(t), humidity(h), security(sec) { // �Է°����� �μ�argument
        strcpy(owner, o);
     }
    */
    // �Ҹ��� ~SmartHome() {}
    void setTemperature(int temperature) { // �Ű�����
        this->temperature = temperature; // �����͸� ���� ��ü�� ���� ���� (���� ��: �μ�)
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() { // ��ü�� owner���� ��ȯ�ض� �Է��� ���� ��¸� ����
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
        cout << "������: " << this->owner << endl; //print�� ����
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