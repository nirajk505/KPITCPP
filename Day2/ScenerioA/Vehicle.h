#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "Type.h"

class Vehicle{
    private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;

    public:
    Vehicle(std::string id, std::string brand, Type type, float price);

     Vehicle(std::string id,std::string brand, Type type);
    //defaulted copy constructor
    //i will not write the body of copy constructor compiler should generate a default
    //version of it during compilation

    Vehicle(const Vehicle&)=default; //shallow copy

    // Vehicle(const Vehicle& obj){
    //     this->_id=obj._id;
    //     this->_brand=obj._brand;
    //     this->_price=obj._price;
    //     this->_type=obj._type;
    // }    use anyone of these

    ~Vehicle(){
        std::cout<<"vehicle with id"<<_id<<"id destroyeed";
    }


    
        std::string id() const {return _id;}
        std::string brand() const {return _brand;}
        Type type() const {return _type;}
        float price() const {return _price;}

        friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};
std::string DisplayEnum(const Type value);

#endif // VEHICLE_H
