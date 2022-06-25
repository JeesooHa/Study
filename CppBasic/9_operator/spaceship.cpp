#include <iostream>

int main()
{
    int n1 = 30, n2 = 20;

    bool b1 = (n1<n2);

    auto ret = (n1 <=> n2); // C++20, return 값이 구조체라 출력 불가
    
    if(ret == 0)    std::cout<<"n1==n2"<<std::endl;
    else if(ret > 0)    std::cout<<"n1>n2"<<std::endl;
    else if(ret < 0)    std::cout<<"n1<n2"<<std::endl;

    std::cout<<typeid(ret).name() << std::endl;

}