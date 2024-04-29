#pragma once
#include <iostream> //input ouput 쉽게 사용
#include <string> //문자열
using namespace std; //std 라이브러리 namespace 설정

// SmartHome
class SmartHome {
private:
    // 클래스 변수들 member variable, attribute, field
    string owner; //문자열
    int temperature; //정수형
    int humidity;
    bool security; //true or false
public:
    // 클래스 함수들 member function or class method
    // 생성자
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner; //초기값 설정
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    /*
    SmartHome(string owner, int ...) // 매개변수parameter
        : temperature(t), humidity(h), security(sec) { // 입력값들은 인수argument
        strcpy(owner, o);
     }
    */
    // 소멸자 ~SmartHome() {}
    void setTemperature(int temperature) { // 매개변수
        this->temperature = temperature; // 포인터를 통해 객체에 값을 저장 (들어가는 값: 인수)
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() { // 객체의 owner값을 반환해라 입력은 없고 출력만 있음
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
        cout << "집주인: " << this->owner << endl; //print와 동일
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