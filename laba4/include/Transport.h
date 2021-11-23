#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>
#include <string>

using namespace std;

class Transport
{
    public:
        Transport() {
            name = "null";
            typeOfVehicle = "null";
            year = 0;
        }
        ~Transport(){}
        void setName();
        void setType();
        void setYear();
        int getYear();
        string getType();
        virtual void getInfo();

    protected:
       string name;
       string typeOfVehicle;
       int year;
};

#endif // TRANSPORT_H
