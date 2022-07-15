#include <iostream>
#include <vector>

// 추상적인 존재
class Shape
{
public:
    virtual void Draw() = 0; // 모든 도형은 반드시 이 함수가 있어야 함 => 규칙
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
    virtual void Draw() {}
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
