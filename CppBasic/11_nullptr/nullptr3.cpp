#include <iostream>

void foo(int)   {std::cout<<"int"<<std::endl;}
void foo(double)   {std::cout<<"double"<<std::endl;}
void foo(bool)   {std::cout<<"bool"<<std::endl;}
void foo(char*)   {std::cout<<"char*"<<std::endl;}


int main()
{
    foo(0);
    foo(0.0);
    foo(false);
    foo(nullptr);

    std::nullptr_t null = nullptr;
    
    int *p1 = null;
    char* p2 = null;
}
