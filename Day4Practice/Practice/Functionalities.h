#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#include<list>

void CreateObjects(Customer* container[3]);

int countCustomerWithGivenType(Customer* container[3], CustomerType type);

std::vector<Customer*>  customerstroreCredits(Customer* container[3]);

//std::list<Customer*>  customerstroreCredits(Customer* container[3]);


#endif // FUNCTIONALITIES_H
