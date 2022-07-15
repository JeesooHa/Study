#include <iostream>
#include <functional>   // plus<>, minus<>, multiplies<>

template<typename T>
class Plus
{
public:
    T operator()(T a, T b)
    {
        return a+b;
    }
};

int main()
{
    Plus<double> p;
    int n = p(1,2); // p.operator()(1,2)
    
    std::plus<double> p2;
    std::cout << p2(1,1) << std::endl;
}