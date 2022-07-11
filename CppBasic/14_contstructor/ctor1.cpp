#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    Person()
    {
        name = "kim";
        age = 20;

        std::cout << "Constructor"<<std::endl;
    }
    ~Person()
    {
        std::cout << "Destructor"<<std::endl;
    }
};

int main()
{
//    Person p = {"kim", 25}; // public: 일 경우만 가능

    Person p;

    std::cout<<"____"<<std::endl;
}