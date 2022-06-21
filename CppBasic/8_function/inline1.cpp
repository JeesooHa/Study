int Add1(int a, int b)
{
    return a+b;
}

inline int Add2(int a, int b)
{
    return a+b;
}

int main()
{
    int ret1 = Add1(1,2);
    int ret2 = Add2(1,2);

    int(*f)(int, int) = &Add2;  // inline 함수 경우 일반적으로 치환되어 기계어 코드가 생성되지 않으나, 다음과 같이 명시적으로 함수 포인터로 접근할 경우 생성됨
}