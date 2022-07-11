#include <iostream>

template<class F, class T>
void call(F f, T arg)
{
    f(arg);
}

void foo(int a){}
void goo(int*p){}

int main()
{
    foo(10);    //ok
    goo(0);     // ok

    call(foo, 10);  // ok
    //call(goo, 0);   // error

    call(goo, nullptr);
}