#include"Functionalities.h"
#include"Customer.h"
#include<list>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iostream>
void CreateObjects(Customer* container[3])
{
    container[0]=new Customer{101, "Niraj", CustomerType::PREMIUM,150};
    container[1]=new Customer{102, "Avhishek", CustomerType::REGULAR,300};
    container[2]=new Customer{103, "Shubham", CustomerType::VIP,101};
}

int countCustomerWithGivenType(Customer* container[3], CustomerType type){
    int count=0;
    for(int i=0;i<3;i++){
        if(container[i]->ctype()==type){
            count++;
        }
    }
        return count;
    
}

//******************************with list

std::list<Customer*> customerstroreCredits(Customer* container[3])
{
    std::list<Customer*> reqData;
    for(int i=0;i<3;i++)
    {
        if(container[i]->cserviceCredit()>100 && container[i]->cserviceCredit()<200)
        {
           reqData.push_back(container[i]); 
        
        }
    }


    return reqData;

}


