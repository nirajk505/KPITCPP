#include<iostream>
#include<list>
#include<vector>

//alias for data type
using ls = std::list<std::string>;

template <typename T>

class Employee{
    private:
    T _skills;
    std::string _name;
    float _age;

    public:
    Employee(T skills,std::string name,float age)
    :_skills(skills),_name(name),_age(age)
    {

    }
    ~Employee()
    {
        std::cout<<"employee with destructor"<<_id<<"is destroyed\n";
    }

};

int main()
{
    ls skills={"coding", "AI", "VersionControl"};
    //object of class Employee of list of strings
    Employee<ls>* e1 =new Employee<ls>(skills, "emp101",28.2f);
};