#include "Functionalities.h"
#include "VehicleType.h"
#include "Bike.h"
#include "Car.h"

void CreateObjects(Vehicle *garage[3])
{
garage[0] = new Car("V101","Honda",84570.f,VehicleType::CAR ,CarType::SEDAN);
garage[1]=new Bike("bk11","Bajaj",VehicleType::CAR,845780.f, BikeType::SPORTS);
garage[2]=new Car("V103","Honda",84590.f,VehicleType::CAR, CarType::HATCHBACK);

for(int i=0;i<3;i++)
{
    std::cout<< *garage[i]<<"\n";
}
}

float AveragePrice(Vehicle *garage[3]){

    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(garage[i])->price();
    }
    return total/3;
}

void CallCalculate(Vehicle *garage[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(garage[i])->CalculateTax()<<"\n";


    }
}
    void FreeMemory(Vehicle *garage[3])
    {
        for(int i=0;i<3;i++)
        {
            delete(garage[i]);
        }
    }
