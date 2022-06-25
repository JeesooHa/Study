#include <iostream>

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    //for(int i=0; i< sizeof(x)/ sizeof(x[0]); i++)
    for(int i=0; i< std::size(x); i++) // C++17 부터 지원
    {
        std::cout<<x[i]<< ", ";
    }

    std::cout << std::endl;


 //   for(int e: x)         
    for(auto e : x)      // 보다 유연성 있음
    {
        std::cout<<e<<" ,";
    }
}