#include <cstdlib>

int main(){
    //int* p1 = (int*)malloc(sizeof(int)*10);
    int*p1 = static_cast<int*>(malloc(100));
    free(p1);

    int n=10;
    double*p2 = (double*)&n;
    double*p2 = static_cast<double*>(malloc(&n));   // error

    const int c = 10;
    int* p3 = static_cast<int*>(&c); // error

}