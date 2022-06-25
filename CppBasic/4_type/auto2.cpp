int main()
{
    int x[5] = {1,2,3,4,5};

    auto a = x;     //  int *a = x;

    decltype(x) d;  // int d[5];

    decltype(x) d1 = x; //  error
}