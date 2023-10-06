#include "Vehicle.h"

Vehicle::Vehicle( std::string id, std::string brand,Type type,float price )
:_id(id),_brand(brand),_type(type),_price(price)
    {

    }
    Vehicle::Vehicle(std::string id, std::string brand,Type type)
    :_id(id),_brand(brand),_type(type)
    {
        
    }

    std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
        os << "_id: " << rhs._id
           << " _brand: " << rhs._brand
           << " _type: " << DisplayEnum(rhs._type)
           << " _price: " << rhs._price;
        return os;
    }

    std::string DisplayEnum(const Type value)
    {
        if(value==Type::BIKE)
        {
            return "BIKE";
        }
        else if(value==Type::CAR){
            return "CAR";
        }
        else
        {
            return "other";
        }
    }

        