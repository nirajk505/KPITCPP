#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"

/*
A function to create 3 objects of project in an array
alse create 3 objects of employees in a separate array
link one project to one employee

Input : 2 arrays(one for Employees), (second for project)
output : void

*/

void CreateObjects(Employee* arr1[3], Project* arr2[3]);

/*
A function to return the pointer to the employee with the highest salary*/

Employee *EmployeeWithHighestSalary(Employee *arr1[3]);

/*A function to return the count of all employees in the array whose dept values matches with
the second parameter passed to this function
*/

int CountEmployeeWithGivenDepartment(Employee *arr1[3], Department type);

/*find the average budget of all projec*/

float AverageBudget(Project *arr2[3]);

 /*A function to deallocate the heap reservation made throughout the program*/

void FreeMemory(Employee *arr1[3]);

#endif // FUNCTIONALITIES_H
