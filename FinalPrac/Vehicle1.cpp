#include "Vehicle1.h"

Vehicle1::Vehicle1(std::string id, std::string brand, VehicleType1 type, float price)
:_id(id), _brand(brand),_type(type),_price(price)
{
}

Vehicle1::Vehicle1(std::string id, std::string brand, VehicleType1 type)
:_id(id), _brand(brand),_type(type)
{
}

std::ostream &operator<<(std::ostream &os, const Vehicle1 &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _type: " <<DisplayEnum(rhs._type)
       << " _price: " << rhs._price;
    return os;
}

std::string DisplayEnum(const VehicleType1 value)
{
  if(value==VehicleType1::BIKE)
  {
    return "BIKE";
  }
  else if(value==VehicleType1::CAR)
  {
    return "CAR";
  }
  else
  {
    return "OTHER";
  }
}


