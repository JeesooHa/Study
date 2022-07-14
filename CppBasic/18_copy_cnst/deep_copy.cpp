#include <iostream>
#include <cstring>

class Person
{
    char* name;
    int   age;

public:
    Person(const char* n, int a) : age{a}
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    ~Person()
    {
        delete[] name;
    }

    Person(const Person& p) : age{p.age}
    {
        // age = p.age;
        // name = p.name;
        // deep copy
        name = new char[strlen(p.name)+1];
        strcpy(name, p.name); 
    }
};

int main()
{
    Person p1{"kim", 20};
    Person p2 = p1;
}

