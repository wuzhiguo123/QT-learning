#ifndef THREAD_H
#define THREAD_H

#include <QWidget>
#include <QThread>
#include <QMutex>
class Thread : public QThread
{
    Q_OBJECT
public:
    Thread();
    void run() override;
    static int num;
    static QMutex mutex;
};

#endif // THREAD_H
