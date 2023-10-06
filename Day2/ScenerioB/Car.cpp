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