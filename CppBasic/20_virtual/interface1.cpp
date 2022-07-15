#include <iostream>

class Camera
{
public:
    void task()
    {
        std::cout << "take picture"<<std::endl;
    }
};

class HDCamera
{
public:
    void task()
    {
        std::cout << "take picture HD"<<std::endl;
    }
};

class People
{
public:
    void useCamera(Camera* p)       { p-> task();}
    void useHDCamera(HDCamera* p)   { p-> task();}
};

int main()
{
    People p;
    Camera c1;
    p.useCamera(&c1);
}
