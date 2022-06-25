struct Point
{
    int x = 1;
    int y{2};
};

Point foo()
{
    Point p = {1,2};
    return p;
}

int main(){
    struct Point pt1;
    Point pt2 = {3,4};

    // structure binding (c++17)
    auto [x,y] = pt2;   
    //    int x = pt2.x;
    //    int y = pt2.y;

    int arr[3] = {1,2,3};
    auto [a,b,c] = arr;
    // int a = arr[0];
    // int b = arr[1];
    // int c = arr[2];

    auto ret = foo();   // Point ret = foo();
    auto[x1,y1] = foo();
}