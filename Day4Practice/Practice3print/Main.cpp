#include "Functionalities.h"
#include<iostream>
#include "Customer.h"
#include<list>

int main()
{
    Customer* container[3];

    CreateObjects(container);
    
        for(int i=0;i<3;i++){
            std::cout<<"data :"<<*container[i]<<"\n";
            
        
    }

    int result=countCustomerWithGivenType(container,CustomerType::PREMIUM);
    std::cout<<"depa prem : "<<result<<"\n";

  std::cout<<"--------------------------------------------"<<std::endl;


customerstroreCredits(container);

std::cout<<"***************************PREMIUM..."<<std::endl;

customerPremiumDetail(container,CustomerType::PREMIUM);
}