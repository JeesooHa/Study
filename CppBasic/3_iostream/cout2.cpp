#include <iostream>
#include <iomanip>  // io manipulator

int main()
{
    int n = 10;
    std::cout << n << std::endl; // 10진수

    // "%x"
    std::cout << std::hex << n << std::endl; // 16진수	
    std::cout << n << std::endl;  // 16진수로 유지됨

    // "%d"
    std::cout << std::dec << n << std::endl; //10진수로 변경됨

    // 자릿수 맞추기
    // "%10d"
    std::cout << std::setw(10) << n << std::endl; //'        '10
    std::cout << std::setw(10) << std::setfill('#') << n  << std::endl; //########10
    std::cout << std::setw(10) << std::setfill('#') << std::left << n  << std::endl; //10########
}