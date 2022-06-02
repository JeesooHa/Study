#include <iostream>

struct Point {
	int x = 0; // 맴버 초기화 C++11
	int y = 0;
};
int main() {
	struct Point p1; // C style
	Point p2; // C++ style	

	int n1 = 0b10;        // c++11
	int n2 = 1'000'000;   // c++11

	int n3 = 0;   // 함수 중간에 변수선언 가능

	bool b = true;   // false C99
}