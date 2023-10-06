#ifndef VEHICLE1_H
#define VEHICLE1_H
#include"VehicleType1.h"
#include<iostream>

class Vehicle1
{
private:
    std::string _id;
    std::string _brand;
    VehicleType1 _type;
    float _price;

public:
    Vehicle1(Vehicle1& obj)=default;
    Vehicle1(std::string id, std::string brand,VehicleType1 type, float price);
    Vehicle1(std::string id, std::string brand,VehicleType1 type);

    virtual float CalcualteTax1()=0;
    
    ~Vehicle1() {
        std::cout<<"vehicle with id"<<_id<<"is deleted"<<"\n";
    }


    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType1 type() const { return _type; }

    float price() const { return _price; }

    

    friend std::ostream &operator<<(std::ostream &os, const Vehicle1 &rhs);

   
    
};
std::string DisplayEnum(const VehicleType1 value);

#endif // VEHICLE1_H
