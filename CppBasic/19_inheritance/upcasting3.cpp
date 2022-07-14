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

void changeBlack(Shape* p)
{
    p->color = 0;
}

int main()
{
    Rect rect;
    changeBlack(&rect);

    Rect* buffer[10];   // 사각형만 보관
    Shape* buffer2[10];  // 모든 도형 보관

}