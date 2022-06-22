#include <iostream>

int main()
{
    int n = 10;
    int *p = &n;
    int &r = n;

    r=20;
    
    std::cout<<n<<std::endl;    // 20
    std::cout<<&n<<std::endl;    // 20
    std::cout<<&r<<std::endl;    // 20
}