int main()
{
    int n1 = 0;
    int *p1 = 0; //okay

   // int* p2 = 10;   //error
   // int* p3 = n1;   // error

    int* p4 = nullptr;  //okay
    void(*p5)() = nullptr;  //okay

    //int n2 = nullptr;   // error

}