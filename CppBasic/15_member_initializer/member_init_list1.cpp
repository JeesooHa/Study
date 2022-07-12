#include <iostream>

class People1
{
    std::string name;
    int age;
public:
    People1 (const std::string& s, int a){
        name = s;   // 대입 - 2번의 함수호출
        age = a;
    }
};


class People2
{
    std::string name;
    int age;
public:
    People2 (const std::string& s, int a)
    : name{s}, age{a}   // 초기화 - 1번의 함수호출로 초기화
    {
    }
};