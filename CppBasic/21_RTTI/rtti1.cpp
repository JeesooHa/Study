#include <iostream>
#include <typeinfo>

int main()
{
    int n1 = 10;
    auto n2 = n1;

    const std::type_info& t1 = typeid(n2);

    std::cout<<t1.name()<<std::endl;
}