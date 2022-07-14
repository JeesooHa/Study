#include <iostream>
#include <cstring>

class Person
{
    std::string name;
    int   age;

public:
    Person(std::string n, int a) : name(n), age{a}
    {
    }
    ~Person()
    {
    }
};

int main()
{
    Person p1{"kim", 20};
    Person p2 = p1;
}

