#include <stdio.h>

namespace Audio
{
    void init()     {   printf("init Audio module\n");  }
    void reset()    {   printf("reset Audio module\n"); }
}

namespace Video
{
    void init()    {   printf("init Video module\n");    }
}

int main()
{
    Audio::init();

    using Audio::init;
    init();
    //reset();        // error

    using namespace Audio;
    init();
    reset();
}