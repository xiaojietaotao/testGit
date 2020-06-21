#ifndef MYTHEAD_H
#define MYTHEAD_H

#include "QThread"

class Mythead : public QThread
{
    public:
        Mythead();
        void closeThread();

    public:
        virtual void run();

    private:
        volatile bool isStop;       //isStop是易失性变量，需要用volatile进行申明
};

#endif // MYTHEAD_H
