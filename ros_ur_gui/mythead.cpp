#include "mythead.h"
#include"common.h"

extern "C"
{
    #include "setup.h"
}

Mythead::Mythead()
{
    this->isStop = false;
}

void Mythead::closeThread()
{
    this->isStop = true;
}

void Mythead::run()
{
    machine_if_launch(carKind, baud_rate);
    while(1)
    {
        if (!get_machine_if_sta())
        {
            qDebug("mythread close\n");
            return;
        }
    }
}
