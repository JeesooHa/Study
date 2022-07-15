#include "car.h"

template<typename T> 
class Ptr
{
    T* pObj;
public:
    Ptr(T* p=0)   : pObj(p)   {}
    ~Ptr()  {delete pObj;}  // 자동삭제 기능
    T* operator->()   { return pObj;}

    T& operator*(){return *pObj;}
};

int main()
{
    // Car *p = new Car;    // block이 벗어나면 아무것도 못함

    Ptr<Car> p = new Car;    // Ptr p(new Car)
    p->Go();    // p.operator->()Go()
                // p.operator->()->Go()         // g++ 컴파일러의 특징
    (*p).Go();  // (p.operator*()).Go()

}