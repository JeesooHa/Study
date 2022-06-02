#include <iostream>
#include <iomanip>

int main()
{
	int n = 10;
	std::cout << n << std::endl;					// 10진수
	std::cout << std::hex << n << std::endl;		// 16진수
	std::cout << n << std::endl;					// 16진수로 유지됨
	std::cout << std::dec << n << std::endl;		// 10진수로 변경됨

	std::cout << std::setw(10) << "hello" << std::endl;			// '  'hello
	std::cout << std::setfill('#') << std::setw(10) <<
		"hello" << std::endl;		// #####hello
	std::cout << std::setfill('#') << std::left << std::setw(10) <<
		"hello" << std::endl; //hello#####
}

