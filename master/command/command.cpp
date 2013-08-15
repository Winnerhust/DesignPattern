#ifndef __COMCOMMAND_CPP__
#define __COMCOMMAND_CPP__

#include <iostream>
#include "command.h"
using namespace std;
Command::Command()
{
}
Command::~Command()
{
}
ConCommand::ConCommand(Recevier *rec)
        :m_rec(rec)
{
}
ConCommand::~ConCommand()
{
}
void ConCommand::Execute()
{
        cout<<"Command::Execute"<<endl;
        m_rec->Action();
}

#endif
