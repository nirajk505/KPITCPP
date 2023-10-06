#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void CreateObjects(Vehicle *container[3])
{
   container[0] =new Vehicle("v101","Maruti",Type::CAR, 870000.0f);
   container[1] =new Vehicle("v102","Honda",Type::CAR, 170000.0f);
   container[2] =new Vehicle("v103","Toyota",Type::CAR, 370000.0f);

}

/*
loop over all location of the array for each locations pointer
access _price attribute add it total divide total by 3 and return*/
float AveragePrice(Vehicle* container[3])
{
float total=0.0f;
for(int i=0;i<3;i++){
    //total is previous total added with price value taken from address ar i position
    total+=(container[i]) ->price();
}
return total/3;
}