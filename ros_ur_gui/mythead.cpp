#include "mythead.h"
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
    data_rec_setup();
    while(1)
    {
        if (this->isStop)
        {
            return;
        }
    }
}
