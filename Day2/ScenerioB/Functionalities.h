#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"
/*
this function should create objects on heap */

void CreateObjects(Car *arr[3]);

float AveragePrice(Car *arr[3]);

void CallCalculateTax(Car *arr[3]);

void FreeMemory(Car *arr[3]);


/*
delete all aquire memory*/


#endif // FUNCTIONALITIES_H
