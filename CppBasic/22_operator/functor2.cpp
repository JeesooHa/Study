#include <iostream>
#include <ctime>

// 0~9 사이의 난수 얻기
int frand() { return rand() % 10;}

class URandom
{
    char history[10];   // -> bit
public:
    URandom()
    {
        for(int i=0; i<10; i++){
            history[i] = 0;
        }
        srand(time(0));
    }
    int operator()()
    {
        int n=-1;

        do{
            n = rand() % 10;
        }while(history[n] == 1);

        history[n] = 1;
        return n;
    }

    void reset()
    {
        for(int i=0; i<10; i++){
            history[i] = 0;
        }
    }
};

int main()
{
   URandom orand;
   std::cout << orand() << std::endl;
   std::cout << orand() << std::endl;
   std::cout << orand() << std::endl;


}