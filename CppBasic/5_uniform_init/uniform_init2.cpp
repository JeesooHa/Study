int main()
{
    int n1 = 3.4; // 암시적 형변환으로 컴파일은 되지만 에러의 원인이 됨

    // prevent narrow
    int n2{3.4};  // error

    char c1{100};  // ok
    char c2{300};  // error

    int n3{};  // 0
}