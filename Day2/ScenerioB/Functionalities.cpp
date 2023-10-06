#include "Functionalities.h"
#include "VehicleType.h"

void CreateObjects(Car *arr[3])
{
arr[0] = new Car("V101","Honda",84570.f,VehicleType::CAR ,CarType::SEDAN);
arr[1]=new Car("V102","Maruti",84670.f,VehicleType::CAR ,CarType::SUV);
arr[2]=new Car("V103","Honda",84590.f,VehicleType::CAR, CarType::HATCHBACK);

}

float AveragePrice(Car *arr[3]){

    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->price();
    }
    return total/3;
}

void CallCalculateTax(Car *arr[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(arr[i])->CalculateTax()<<"\n";


    }
}
    void FreeMemory(Car *arr[3])
    {
        for(int i=0;i<3;i++)
        {
            delete(arr[i]);
        }
    }
