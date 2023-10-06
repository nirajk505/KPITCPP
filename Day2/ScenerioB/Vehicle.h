#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
//#include "Type.h"
#include "VehicleType.h"

class Vehicle{
    private:
    std::string _id;
    std::string _brand;
     VehicleType _type;
    float _price;

    public:

    Vehicle(const Vehicle& obj)= default;
    Vehicle(std::string id, std::string brand,VehicleType type, float price);
     Vehicle(std::string id, std::string brand,VehicleType type);
     virtual float CalculateTax()=0; //pure virtual function (known as abstract method in java)
     //virtual func only declared in parent class and need to override in child class
    
    ~Vehicle(){
        std::cout<<"object with id"<<_id<<"is destroyed\n";
    };

    std::string id() const { return _id; }
      std::string brand() const { return _brand; }
        float price() const { return _price; }
        VehicleType type() const { return _type; }

};

#endif // VEHICLE_H
