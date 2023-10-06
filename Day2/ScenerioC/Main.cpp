#include "Car.h"

#include "Functionalities.h"

int main(){
    //3 locations reserved; each locations can store 8 bytes(address)
   Vehicle*  arr[3];

    CreateObjects(arr);

    std::cout<<"Average price is"<<AveragePrice(arr)<<"\n";

    FreeMemory(arr);
    
}