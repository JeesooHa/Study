#include <iostream>
#include <typeinfo>

class Animal
{
public:
    // 기반클래스의 소멸자는 반드시 가상함수이어야 한다
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    int color;
};

// 모든 동물의 공통적인 특성
void foo(Animal* p)
{
    // Dog* pDog = static_cast<Dog*>(p);  // 컴파일 시간
    Dog* pDog = dynamic_cast<Dog*>(p);
    if(pDog != 0)
    {
        pDog->color = 10;
    }
    std::cout<<pDog<<std::endl;
};

int main()
{
    Animal  a;  foo(&a);
    Dog     d;  foo(&d);
}