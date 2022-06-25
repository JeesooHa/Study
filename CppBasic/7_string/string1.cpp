#include <iostream>
#include <cstring>

// C Style
int main()
{
    char s1[] = "abcd";
    char s2[5];

    // s2 = s1;    // error

    strcpy_s(s2, s1);

//    if(s2 == s1)    // 배열의 주소 비교
    if(strcmp(s2,s1)==0)
        std::cout << "same" << std::endl;
    else
        std::cout<< "not same"<<std::endl;
}