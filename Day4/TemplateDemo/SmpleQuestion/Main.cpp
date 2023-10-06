#include<iostream>
#include"Functionalities.h"

int main()
{
    Employee* arr1[3];
    Project* arr2[3];

    CreateObjects(arr1, arr2);

    for(int i=0;i<3;i++){
        std::cout<<"Employee Data : "<<*arr1[i]<<"\n";
    }

    for(int i=0;i<3;i++){
        std::cout<<"Project Data : "<<*arr2[i]<<"\n";
    }

    Employee* res = EmployeeWithHighestSalary(arr1);
    std::cout<<"employee with highest salary: " <<*res <<"\n";

    int tcount=CountEmployeeWithGivenDepartment(arr1, Department::DEVELOPMENT);
    std::cout<<"DEPARTMENT OF DEVELOPMENT :"<<tcount<<"\n";



    float average=AverageBudget(arr2);
    std::cout<<"Average budget ..."<<average<<"\n";

    FreeMemory(arr1);

    return 0;

}