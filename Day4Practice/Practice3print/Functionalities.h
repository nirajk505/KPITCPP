#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#include<list>

void CreateObjects(Customer* container[3]);

int countCustomerWithGivenType(Customer* container[3], CustomerType type);

void customerPremiumDetail(Customer* container[3],CustomerType _type);



void customerstroreCredits(Customer* container[3]);


#endif // FUNCTIONALITIES_H
