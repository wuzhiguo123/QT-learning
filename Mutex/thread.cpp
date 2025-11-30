#include "thread.h"
#include <QMutexLocker>
int Thread::num = 0;
QMutex Thread::mutex;
Thread::Thread()
{

}

void Thread::run()
{
    int i=5000;
    while(i--)
    {
        QMutexLocker locker(&mutex);
        num++;

    }
}
0
