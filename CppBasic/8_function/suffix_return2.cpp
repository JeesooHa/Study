#include <iostream>

template<class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout<<add<int>(1,2)<<std::endl;
    std::cout<<add(1,2)<<std::endl;
    std::cout<<add(1.2,2.1)<<std::endl;

    // 인자를 보고 추론 불가
//    std::cout<<add(1, 2.1)<<std::endl; // error

    std::cout<<add<double>(1,2.1)<<std::endl; // okay
}