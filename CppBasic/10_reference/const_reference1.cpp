struct Rect
{
    int left, top, right, bottom;
};

//void foo(Rect r)
void foo(const Rect& r)
{
//    r.left = 100;   // error
}

int main()
{
    Rect rc = {1,1,5,5};
    foo(rc);
}
