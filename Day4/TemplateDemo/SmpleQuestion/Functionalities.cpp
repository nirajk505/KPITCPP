#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"

void CreateObjects(Employee* arr1[3], Project* arr2[3]){
    //arr1 for employee
    //arr2 for project

    arr2[0]=new Project("P105","15",3000.0f);
    arr1[0]=new Employee("A101", "Niraj",5000, Department::DEVELOPMENT,arr2[0]);

     arr2[1]=new Project("P106","15",3000.0f);
    arr1[1]=new Employee("A102", "Abhishek",5000, Department::DEVELOPMENT,arr2[1]);

     arr2[2]=new Project("P107","15",3000.0f);
    arr1[2]=new Employee("A103", "Shubham",5000, Department::DEVELOPMENT,arr2[2]);
    
}

// Employee* EmployeeWithHighestSalary(Employee *arr1[3])
// {
//     Employee* result=nullptr;
//     //assume first employee salary as highest

//     float max=arr1[0]->salary();
//     //take 1 variable for recording current position obj salary in loop
//     float currentSal=0.0f;
//     for(int i=0;i<3;i++)
//     {
//         //fetch current position employee salary
//         currentSal = arr1[i]->salary();

// //if current sal is more...
//         if(currentSal>max){
//             max=currentSal;
//             result = arr1[i];
//         }
//     }
//     return result;
// }

/*RETURN EMPLOYEE WITH HISGHEST SALARY*/

Employee* EmployeeWithHighestSalary(Employee *arr1[3])
{
    Employee* res;
    float max=0;
    for(int i=0;i<3;i++)
    {
        if(arr1[i]->salary() > max)
        {
            res=arr1[i];
            max=arr1[i]->salary();
        }
    }
    return res;
}





int CountEmployeeWithGivenDepartment(Employee *arr1[3], Department type)
{
int count=0;
for(int i=0;i<3;i++)
{
    if(arr1[i]->dept()==type){
        count++;
    }
}
return count;
}

float AverageBudget(Project* arr2[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++)
    {
        total+=arr2[i]->budget();
    }
    return total/3;
}

void FreeMemory(Employee* arr1[3])
{
    //delete the inner project pointer
    for(int i=0;i<3;i++)
    {
        delete arr1[i]->project();
        delete arr1[i];
    }
}