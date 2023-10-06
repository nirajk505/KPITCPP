/*
A function to create 3 objects on the heap
*/

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"

/*
function to create 3 object on the heap and store address in the container array
*/
void CreateObjects(Vehicle* container[3]);

/*
function to find average of price values of 3 objects in thne container array
*/
float AveragePrice(Vehicle* container[3]);


#endif // FUNCTIONALITIES_H
