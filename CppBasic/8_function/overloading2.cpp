void f1(int a){}    // ok
void f1(double a){} // ok

void f2(int a)  {}
void f2(int a, int b){ }    // ok

// f3은 아래처럼 만들 수 없음
// void f3(int a) {}
// char f3(int a) { return 0;} // error

// f4는 만들 수 있지만, 사용 시 호출이 모호함
void f4(int a) {}
void f4(int a, int b=0) {}

// 호출 시 컴파일러가 어디로 갈지 판단하지 못함
void f5(char a){}
void f5(short a){}

int main()
{
    f1(3);
    f1(3.3);

    f2(1);
    f2(1,2);

    f4(1,2);    
    //f4(1);    // ambiguos error

    f5('a');    // ok
    //f5(1);
}