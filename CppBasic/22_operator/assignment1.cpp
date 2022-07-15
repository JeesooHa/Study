#include <iostream>

class Point
{
    int x,y;
public:
    Point(int a=0, int b=0) : x(a), y(b) {}

    void print() const
    {
        std::cout<<x<<", "<<y<<std::endl;
    }

    // 얕은 복사
    Point& operator=(const Point& p)
    {
        x = p.x;
        y = p.y;
        return *this;
    }

};

int main()
{
    Point p1(1,1);  // 생성자 호출
    Point p2(2,2);  // 생성자 호출
    Point p3(p1);   // 복사 생성자 호출
    Point p4 = p1;  // 복사 생성자 호출

    p4 = p2;    // 대입 연산자 호출

    p4 = p2 = p1;

    p4.print(); // p4.operator=(p2)


}