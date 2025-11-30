#include "thread.h"

Thread::Thread()
{

}

void Thread::run()
{
    int i=10;
    while(i--)
    {
        sleep(1);
        emit notify();
    }
}
