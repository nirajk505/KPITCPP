 #include<iostream>

 #include "Department.h"
  
 class Student
    {
        private:
        int roll_number;
        std::string s_name;
        float _fees;
        char _grade;
       Department _dept; //IT, CS ,AI, ML

       public:
       Student() =default;
       Student(
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
        )
        {
            this->s_name=name;
            this->_fees=fees;
            this-> roll_number=rnum;
            this->_grade=grade;
            this->_dept=dept;
        }

        void display()
        {
            std::cout<<s_name;
            std::cout<<_fees;
            std::cout<< roll_number;
            std::cout<<_grade;
        
        }

       ~Student(){ //destructor
        std::cout<<"student with roll no:"
        <<this-> roll_number
        <<"is now destroyed\n";
       }
        
    };

int main(){
    //STACK--AUTOMATIC STORAGE//get deleted automatically
    Student s1(101,"niraj",87777.0f,'A',Department::CS);
    // Student s3(103,"aakash",87776.0f,'A',Department::IT);

    //HEAP--will not get deleted automatically
   Student* s2= new Student(102,"shubham",87776.0f,'A',Department::AI_ML);
//    Student* s4= new Student(104,"darpan",87775.0f,'A',Department::AI_ML);
   //delete s2; //to delete object in heap
 
   Student *arr[2] = {s2,&s1}; //array of stack allocated student objects
   //Student* heapArr[1]={s2};
   //Student* heapArr[2]={s2,s4};


for(auto it:arr)
{
    it->display();
    std::cout<<"------------------------------------------------------------"<<std::endl;
}

    

//    s2  = new Student(105,"abhishek",25000.0f,'C',Department::AI_ML);



 
}