#include "Airplane.h"
#include <string>

using namespace std;

void Airplane::setCountry() {
    string ct;
    cout << "Write a country of airplane: ";
    cin >> ct;
    country = ct;
}

void Airplane::getInfo() {
    cout << "Name - " << name << endl;
    cout << "Type - " << type << endl;
    cout << "Year of creating - " << year << endl;
    cout << "Country - " << country << endl;
}
