#ifndef __COMINVOKER_CPP__
#define __COMINVOKER_CPP__

#include <iostream>
#include "invoker.h"
using namespace std;
Invoker::Invoker(Command *c)
        :cmd(c)
{
}
Invoker::~Invoker()
{
}
void Invoker::Invoke()
{
        if (cmd!=NULL){
                cmd->Execute();
        }
}
#endif
