template<typename T>
T square(T a)
{
    return a*a;
}

int main()
{
    square<int>(3);
    square(3);      // type deduction
    square<double>(3.4);
}
