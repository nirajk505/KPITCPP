#include"Functionalities1.h"
#include"Vehicle1.h"
#include"Car1.h"
#include<iostream>

int main()
{
    Car1* arr[3];
    CreateObjects(arr);

    CallCalculateTax1(arr);

//     for(int i=0;i<3;i++)
//     {
//         std::cout<<*arr[i]<<std::endl;
//     }

//     std::cout<<"Average price is :"<<AveragePrice(arr)<<"\n";
    


// int res=countTypeofEnum(arr, VehicleType1::CAR);
// std::cout<<res<<"\n";
}
