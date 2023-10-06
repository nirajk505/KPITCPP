#include<iostream>

//generic in java or template in cpp

template <typename T>
void display()( T arr[3])
{
    for(int i=0;i<3;i++){
        std::cout << "Address :" <<arr[i] <<"\n";
    }
}

class Employee{
    private:
    std::string _name;
    int _id;

public:
Employee(std::string name, int id)
:_name(name), _id(id){}

};

class Car{
    std::string _name;
    std::string _brand;

    Car(std::string name, std::string brand)
    :_name(name),_brand(brand){}


}










int main()
{
    Car* arr1[3];
    Employee* arr[3];

    for(int i=0;i<3;i++)
    {
        arr1[i]=new Car();
        arr2[i]=new Employee();
    }
    display<Car*>(arr1);
    display<Employee*>(arr2);

}