#include <iostream>

class Shape
{
public:
    int color;
};

class Rect : public Shape
{
public:
    int x,y,w,h;
};

int main()
{
    Rect rect;

    Rect*   p1 = &rect; //ok
//    int*    p2 = &rect; //error
    Shape*  p3 = &rect; 

    Shape& r = rect;
}