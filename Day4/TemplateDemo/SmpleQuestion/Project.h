#ifndef _PROJECT_H
#define _PROJECT_H
#include<iostream>

class  Project
{
private:
    std::string _name;
    std::string _duration_days;
    float _budget;
public:
     Project() = delete; //
     Project(const Project&) = delete;
     Project(
         std::string name,
    std::string duration,
    float budget
     );
    ~ Project() {
        std::cout<<"Project with name:"<<_name<<"is destroyed\n";
    }

    std::string name() const { return _name; }

    std::string durationDays() const { return _duration_days; }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);

    
};

#endif // _PROJECT_H
