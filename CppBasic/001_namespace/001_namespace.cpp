#if 0
#include <stdio.h>

namespace Audio {
    void init() { printf("Audio init\n"); }
    void reset() { printf("Audio reset\n"); }
}

void init() {
    printf("Program init\n");
}

int main()
{
    Audio::init();     // 완전한 이름을 사용한 접근

    using Audio::init;          // using 선언을 사용한 접근
    init();     // ok
    //reset();    // error

    using namespace Audio;      // using 지시어를 사용한 접근
    init();     // ok
    reset();    // ok

    ::init();       // global namespace에 접근
}

#endif

#if 1

int main()
{


}


#endif

