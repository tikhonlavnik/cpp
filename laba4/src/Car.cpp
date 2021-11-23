#include "Car.h"
#include <string>

void Car::setPower() {
    int pw;
    cout << "Write a power of car: ";
    cin >> pw;
    power = pw;
}

void Car::setMark() {
    string mk;
    cout << "Write a mark of car: ";
    cin >> mk;
    mark = mk;
}

void Car::getInfo() {
    cout << "Name - " << name << endl;
    cout << "Mark - " << mark << endl;
    cout << "Type - " << type << endl;
    cout << "Year of creating - " << year << endl;
    cout << "Power - " << power << " hp" << endl;
}

