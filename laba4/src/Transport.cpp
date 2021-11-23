#include "Transport.h"

void Transport::setName() {
    string n;
    cout << "Write a name of transport: ";
    cin >> n;
    name = n;
}

void Transport::setType() {
    string t;
    cout << "Write a type of transport: ";
    cin >> t;
    typeOfVehicle = t;
}

void Transport::setYear() {
    int y;
    cout << "Write a year of transport: ";
    cin >> y;
    year = y;
}

void Transport::getInfo() {
    cout << "Name - " << name << endl;
    cout << "Type - " << typeOfVehicle << endl;
    cout << "Year of creating - " << year << endl;
}

int Transport::getYear() {
    return year;
}
string Transport::getType() {
    return typeOfVehicle;
}
