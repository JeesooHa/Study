class Shape
{
public:
    virtual void Draw() = 0;    // 반드시 만들어라
};

class Rect : public Shape
{
public:
    virtual void Draw() {}  

};

int main()
{
    Shape s;    // error
    Shape*p;    // ok

    Rect r;

}