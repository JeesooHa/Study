#include <iostream>
#include <vector>

class Shape
{
public:
    virtual void Draw() { std::cout <<"Shape::Draw"<<std::endl;}
};

class Rect : public Shape
{
public:
    virtual void Draw() { std::cout <<"Rect::Draw"<<std::endl;}
};

class Circle : public Shape
{
public:
    virtual void Draw() { std::cout <<"Circle::Draw"<<std::endl;}
};

class Triangle : public Shape
{
public:
    virtual void Draw() { std::cout <<"Circle::Draw"<<std::endl;}
};

int main()
{
    std::vector<Shape*>   v;

    while(1)
    {
        int cmd;
        std::cin >> cmd;

        if(cmd == 1)    v.push_back(new Rect);
        else if (cmd == 2)  v.push_back(new Circle);

        else if(cmd == 9) // p는 shape* 타입
        {
            for(auto p:v)
                p->Draw();  // 다형성
        }
    }

}
