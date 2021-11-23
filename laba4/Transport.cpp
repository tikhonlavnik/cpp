#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string name;
    string typeOfTransport;
    int weight;
public:
    Transport() {};
    ~Transport() {};
    void setName() {
        string n;
        cout << "Write a name of transport: ";
        cin >> n;
        name = n;
    }
    void setTypeOfTransport() {
        string tot;
        cout << "Write a type of transport: ";
        cin >> tot;
        typeOfTransport = tot;
    }
    void setWeight() {
        int w;
        cout << "Write a weight of transport: ";
        cin >> w;
        weight = w;
    }
    virtual void getInfo() {
        cout << "Name - " << name << endl;
        cout << "Type of transport - " << typeOfTransport << endl;
        cout << "Weight - " << weight << endl;
    }
};
