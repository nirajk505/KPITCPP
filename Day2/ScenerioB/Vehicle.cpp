#include "Vehicle.h"

Vehicle::Vehicle(std::string id,std::string brand, VehicleType type,float price )
 :_id(id),_brand(brand),_type(type),_price(price)
    {

    }
    Vehicle::Vehicle(std::string id, std::string brand,VehicleType type)
    :_id(id),_brand(brand),_type(type)
    {
        
    }
        
