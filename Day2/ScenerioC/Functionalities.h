#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"
/*
this function should create objects on heap */

void CreateObjects(Vehicle *garage[3]);

float AveragePrice(Vehicle *garage[3]);

void CallCalculateTax(Vehicle *garage[3]);

void FreeMemory(Vehicle *garage[3]);






/*
delete all aquire memory*/


#endif // FUNCTIONALITIES_H
