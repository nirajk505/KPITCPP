#include "Car1.h"
#include "Vehicle1.h"

Car1::Car1(std::string id, std::string brand,VehicleType1 type,float price,  CarType1 ctype)
: Vehicle1(id, brand,type,  price ), _ctype(ctype)
{

}

Car1::Car1(std::string id, std::string brand,VehicleType1 type, CarType1 ctype)
: Vehicle1(id, brand, type), _ctype(ctype)
{

}
float Car1::CalcualteTax1()
{
    return 0.1f * price();
}