#include <iostream>
#include <cstring>

// C++ Style
int main()
{
    std::string s1 = "abcd";
    std::string s2;

    s2 = s1;    // okay

    if(s2 == s1)    // 배열의 주소 비교
        std::cout << "same" << std::endl;
    else
        std::cout<< "not same"<<std::endl;

    std::string s3 = s1+s2;
    std::cout <<s3<<std::endl;
}