#include <iostream>

class Point
{
    int x,y;
public:
    Point(int a=0, int b=0) : x(a), y(b) {}
    void print() const{
        std::cout<< x<<", "<<y<<std::endl;
    }

    Point operator+(const Point& p)
    {
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }
};


int main()
{
    int n = 1+2;

    Point p1(1,1);
    Point p2(2,2);
    Point p3 = p1+p2;   // operator +(p1,p2) 일반함수
                        // p1.operator+(p2) => operator+(Point) 맴버함수

    p3.print();
}