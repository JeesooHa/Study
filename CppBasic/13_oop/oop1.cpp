#include <iostream>

struct Rect
{
    int left;
    int top;
    int right;
    int bottom;

    int getArea(){
        return (right-left)*(bottom-top);
    }

    void drawRect()
    {
        std::cout<< "Draw Rect"<<std::endl;
    }
};

int main()
{
    Rect rc = {1,1,10,10};

    int n = rc.getArea();
    rc.drawRect();
}




