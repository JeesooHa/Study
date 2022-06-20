//typedef int DWORD;
//typedef void (*F)(int);

using DWORD = int;
using PF = void(*)(int);  // return void, intput int 인 함수포인터

int main()
{
    DWORD n;    // int n;
    PF f;       // void (*p)(int)
}