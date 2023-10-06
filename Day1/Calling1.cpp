#include<iostream>

//calling by value
// void magic(int data){
//    std:: cout<<data<<"\n";

   //calling by reference

//    void magic(int& data){
//    std:: cout<< "Address of data is:"<<&data <<"\n";
//     std::cout<< "Content in data is :"<<data<<"\n";
//      data=100;
//     std::cout<<"Content after modification is :"<<data<<"\n";
//    };

    
    void magic(int* data){
        std:: cout<< "Data is:"<<*data <<"\n"; 
        std:: cout<< "Address is:"<<data <<"\n"; 
        *data = 100;
    };


int main(){
    int data=80;
    std::cout << &data << "\n";
    magic(&data);
    std::cout << data << "\n";


    
}