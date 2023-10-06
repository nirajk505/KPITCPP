#include<iostream>
int main(){
    int a=10;
    int* ptr;
    ptr=&a;
    int** sptr=&ptr;

    std::cout<<a<<"\n";
   std:: cout<<ptr<<"\n";
   std::cout<<*ptr<<"\n";
   std::cout<<**sptr<<"\n";

}