#include <iostream>
using namespace std;


ostream& tab(ostream& os){
    os<<'\t';
    return os;
}

ostream& menu(ostream& os){
    os<<"1. 설렁탕\n";
    os<<"2. 김밥\n";
    return os;
}

int main()
{
    cout<< tab <<"10";     // cout.operator<<(함수포인터)
    cout<< menu;
}