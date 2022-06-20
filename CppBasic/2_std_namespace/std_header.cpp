#include <algorithm>
#include <cstdio>

int main()
{
    int n = std::max(10, 20);

    printf("%d\n", n);
    std::printf("%d\n", n);   // g++의 경우 <stdio.h> 사용 시 error
}