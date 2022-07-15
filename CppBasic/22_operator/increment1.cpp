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

    Point& operator++() // 전위형 - 한쪽에만 정책 관리하면 됨
    {
        ++x;
        ++y;
        return *this;
    }
    //const Point operator++(int)   // 후위형 -> 연속 2번을 못쓰게 하는 방법
     Point operator++(int)   // 후위형
    {
        Point temp = *this;

        ++(*this);  //  전위형 호출
        // ++x;
        // ++y;
        return temp;
    }
};

int main()
{
    Point p(1,1);
    //++++p;    // p.operator++()   - 전위형
    Point ret = p++;    // p.operator++()   - 후위형
    p++++;  // (p++)++  => (p.operator++(int)).operator++(int)

    ret.print();
    p.print();
}