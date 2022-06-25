#include <iostream>

template<class T1, class T2>
// auto add(T1 a, T2 b) -> decltype(a+b)   // C++11
auto add(T1 a, T2 b) // C++14부터 지원 (생략 가능)
{
    return a + b;
}

int main()
{
    std::cout<<add<double>(1,2.1)<<std::endl; // okay
}