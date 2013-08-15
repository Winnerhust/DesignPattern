#ifndef __COMINVOKER_H__
#define __COMINVOKER_H__

#include "command.h"

class Command;

class Invoker
{
public:
        Invoker(Command *c);
        ~Invoker();
        void Invoke();
private:
        Command *cmd;
};
#endif
