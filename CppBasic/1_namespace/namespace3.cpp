#include <stdio.h>

namespace Audio
{
    void init()     {   printf("init Audio module\n");  }
}

namespace Video
{
    void init()    {   printf("init Video module\n");    }
}

//void init()      {   printf("init global module\n");    }

using Audio::init;

int main()
{
    Audio::init();
    Video::init();

    //using Audio::init;
    ::init();   // global init
    init();
}