struct Point
{
int x, y;
};

int main()
{
/* 
    // 변수의 종류에 따라 초기화 하는 방법이 다름
    int n1 = 0;
    int n2(0);  // () 초기화, C++에서 지원

    int x[2] = {1,2};
    Point p = {1,2);
*/

    // 일관된 초기화 (uniform initialization, 중괄호 초기화)
    // copy initialization (복사 초기화)
    int n1 = {0};
    int n2 = {0};  
    int x[2] = {1,2};
    Point p = {1,2};

    // direct initialization (직접 초기화)
    int n1{0};
    int n2{0};  
    int x[2]{1,2};
    Point p {1,2};
}