#include <iostream>
#include <algorithm>

void swap(int* p1, int *p2) // C
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


namespace utils
{
    //void swap(int& r1, int& r2) // C++
    template<class T>
    inline void swap(T& r1, T& r2) // C++
    {
        T temp = r1;
        r1 = r2;
        r2 = temp;
    }
}


int main()
{
    int x=10, y =20;

    //swap(&x, &y);
    //utils::swap(x, y);
    std::swap(x,y);

    std::cout<<x<<", "<<y;
}