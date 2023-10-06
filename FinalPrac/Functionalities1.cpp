#include "Functionalities1.h"
#include "Vehicle1.h"
#include"CarType1.h"
#include"VehicleType1.h"
#include"Car1.h"

void CreateObjects(Car1 *arr[3])
{
    arr[0] = new Car1("C101", "SUV", VehicleType1 ::CAR, 6000.0f,CarType1::BMW);
    arr[1] = new Car1("C102", "TATA", VehicleType1 ::CAR, 6000.0f, CarType1::SUV);
    arr[2] = new Car1("C103", "HONDA", VehicleType1 ::BIKE, 9000.0f, CarType1::OTHER);
}

void CallCalculateTax1(Car1 *arr[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(arr[i])->CalcualteTax1()<<"\n";


    }
}





// float AveragePrice(Vehicle1* arr[3])
// {
//     int total=0;
//     for(int i=0;i<3;i++)
//     {
//         total+=arr[i]->price();
//     }
//     return total/3;
// }

// int countTypeofEnum(Vehicle1* arr[3], VehicleType1 Type)
// {
//     int count=0;
//     for(int i=0;i<3;i++)
//     {
//         if(arr[i]->type()==Type)
//         {
//             count++;
//         }
//     }
//     return count;
// }