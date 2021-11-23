#ifndef CAR_H
#define CAR_H
#include "Transport.h"
#include <iostream>
#include <string>

class Car : public Transport
{

    public:
    Car() {
        name = "null";
        typeOfVehicle = "car";
        power = 0;
        mark = "null";
        year = 0;
    }
    ~Car(){}
        void setPower();
        void setMark();
        virtual void getInfo();
    protected:
        string mark;
        string type = "car";
        int power;

};

#endif // CAR_H
