#include <iostream>

void inc1(int n){++n;}      // call by value
void inc2(int*p){++(*p);}   // call by pointer
void inc3(int&r){++r;}      // call by reference

int main()
{
    int a=10, b=10, c=10;

    inc1(a);
    inc2(&b);
    inc3(c);

    std::cout<<a<<std::endl;    // 10
    std::cout<<b<<std::endl;    // 11
    std::cout<<c<<std::endl;    // 11
    
}