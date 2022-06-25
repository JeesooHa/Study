struct Rect
{
    int left, top, right, bottom;
};

void f1(Rect r) {}
void f2(const Rect& r)  {}   // 좋은 코드

void f3(int n)  {}           // 좋은 코드 - premetive type일 경우 더 좋을수도 있음
void f4(const int& r)  {}