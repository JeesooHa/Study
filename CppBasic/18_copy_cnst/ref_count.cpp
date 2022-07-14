#include <iostream>
#include <cstring>

class Person
{
    char* name;
    int   age;
    int*  ref; // 참조개수

public:
    Person(const char* n, int a) : age{a}
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);

        ref = new int(1);   // 초기값 1
        //*ref = 1;
    }
    ~Person()
    {
        // 참조 계수 기반인 경우의 소멸자
        if(--(*ref) == 0){
            delete[] name;
            delete ref;
        }
    }

    Person(const Person& p)
        : name(p.name), age{p.age}, ref(p.ref)
    {
        ++(*ref);
    }
};

int main()
{
    Person p1{"kim", 20};
    Person p2 = p1;
}

