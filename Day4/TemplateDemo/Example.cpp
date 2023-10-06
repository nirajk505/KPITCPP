#include<iostream>
#include<list>

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
        std::cout<<"employee with destructor"<<_name<<"is destroyed\n";
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs) {
        os << "_skills: " ;
        //for each loop(range based cpp)
        for(std::string element : rhs._skills)
        {
            os<<element<<"\t";
        }
          os << " _name: " << rhs._name
           << " _age: " << rhs._age;
        return os;
    }
  
   




};

int main()
{
    ls skills={"coding", "AI", "VersionControl"};
    //object of class Employee of list of strings
    //Employee<std::list<std::string>>* e1 =new Employee<std::list<std::string>>(skills, "emp101",28.2f);
    Employee<ls>* e1 =new Employee<ls>(skills,"emp101", 28.2f );
    std::cout<< *e1<<"\n";
}
