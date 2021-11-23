#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "Transport.h"


class Airplane : public Transport
{
    public:
    Airplane() {
        name = "null";
        typeOfVehicle = "airplane";
        year = 0;
        country = "null";
    }
    ~Airplane(){}
        void setCountry();
        virtual void getInfo();

    protected:
        string type = "airplane";
        string country;
};

#endif // AIRPLANE_H
