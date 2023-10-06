#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"

int main(){
    Vehicle* arr[3];
    CreateObjects(arr);

    for(int i=0;i<3;i++)
    {
        std::cout<<"object in container are :"<<*arr[i]<<"\n";
    }
    std::cout<<"Average price: "<<AveragePrice(arr);
}