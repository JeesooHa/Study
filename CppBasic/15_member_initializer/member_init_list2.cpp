class Object
{
    const int c;    // 초기화 필요
    int& r;         // 초기화 필요

public:
    Object(int n, int& x) : c{n}, r{x}
    {
    }
};

int main()
{
    int num = 10;
    Object obj(10,num);
}