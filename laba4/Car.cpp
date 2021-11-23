#include <iostream>
#include <string>
#include "Transport.cpp"

using namespace std;

class Car : public Transport {
protected:
    string model;
public:
    void setModel() {
        string m;
        cout << "Write a model of car: ";
        cin >> m;
        model = m;
    }
    virtual void getInfo() {
        cout << "Name - " << name << endl;
        cout << "Type of transport - " << typeOfTransport << endl;
        cout << "Weight - " << weight << endl;
        cout << "Model of car - " << model << endl;
    }
};
