#include <iostream>

// 모든 카메라는 ICamera로 부터 파생되어야 한다 (규칙)
// 인터페이스
struct ICamera
{
    virtual void take() = 0;
};

class Camera : public ICamera
{
public:
    void take()
    {
        std::cout << "take picture"<<std::endl;
    }
};

class HDCamera : public ICamera
{
public:
    void take()
    {
        std::cout << "take picture HD"<<std::endl;
    }
};

class People
{
public:
    // 규칙대로 사용한다
    void useCamera(ICamera* p)     { p->take();}
};

int main()
{
    People p;
    Camera c1;
    p.useCamera(&c1);
}
