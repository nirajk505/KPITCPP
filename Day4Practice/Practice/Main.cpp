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

    
    for(int i=0;i<3;i++){
    std::cout<<"depa prem : "<<*container[i]<<"\n";
    }
  

  std::cout<<"--------------------------------------------"<<std::endl;
//   std::vector<Customer*>  ans = customerstroreCredits(container);
//std::list<Customer*> ans = customerstroreCredits(container);

std::vector<Customer*> ans = customerstroreCredits(container);
  for(auto it:ans)
  {
    std::cout<<*it<<std::endl;
  }


}