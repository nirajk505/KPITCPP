#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include "VehicleType.h"

class Car : public Vehicle{
    private:
    CarType _car_type;
    public:
    //4 + 1
Car(std::string id, std::string brand,float price ,VehicleType type, CarType cType);
     
    // 3+ 1
Car(std::string id, std::string brand,VehicleType type, CarType cType);

float CalculateTax() override; 

    ~Car(){
        std::cout<<"car part of vehicle with id:"
        <<id()
        <<"is destroyed\n";
    }

    CarType carType() const { return _car_type; }
};



#endif // CAR_H