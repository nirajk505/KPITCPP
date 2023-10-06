#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType cType)
: Vehicle(id, brand,type,  price ), _car_type(cType)
{

}

Car::Car(std::string id, std::string brand,VehicleType type, CarType cType)
: Vehicle(id, brand, type), _car_type(cType)
{

}
float Car :: CalculateTax()
{
    return 0.1f * price();
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " <<DisplayEnum(rhs._car_type);
    return os;

    
    
}

std::string DisplayEnum(const CarType val)
{
    if(val==CarType::HATCHBACK)
    {
        return "HATCHBACK";
    }
    else if(val==CarType::SEDAN)
    {
        return "sedan";
    }
    else{
        return "suv";
    }
}
