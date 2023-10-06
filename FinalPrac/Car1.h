#ifndef CAR1_H
#define CAR1_H
#include"Vehicle1.h"
#include"CarType1.h"

#include<iostream>
class Car1 : public Vehicle1
{
private:
    CarType1 _ctype;
public:
    Car1(std::string id, std::string brand,VehicleType1 type, float price,CarType1 ctype);
    Car1(std::string id, std::string brand,VehicleType1 type,CarType1 ctype);

    float CalcualteTax1() override;

    ~Car1() {}

    CarType1 ctype() const { return _ctype; }
    
};

#endif // CAR1_H
