#include <cstdio>

namespace std
{
class ostream
{
public:
    ostream& operator<<(int n)      {printf("%d", n); return *this;}
    ostream& operator<<(double n)   {printf("%f", n); return *this;}
};
ostream cout;
}

int main()
{
    std::cout << 3 << 3.4;
}