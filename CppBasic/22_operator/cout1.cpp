#include <iostream>
using namespace std;

int main()
{
    printf("%d\n", 3);  // 함수

    cout << 3;      // cout.operator<<(3) => operator<<(int)
    cout << 3.4;    // cout.operator<<(3.4) => operator<<(double)

    cout.operator<<(3);
    cout.operator<<(3.4);
}