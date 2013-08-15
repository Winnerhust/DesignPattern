#ifndef __COMCOMMAND_H__
#define __COMCOMMAND_H__

#include "recevier.h"

class Recevier;
class Command
{
public:
        virtual ~Command();
        virtual void Execute()=0;
protected:
        Command();
};

class ConCommand : public Command
{
public:
        ConCommand(Recevier *rec);
        ~ConCommand();

        void Execute();
private:
        Recevier *m_rec;
};
#endif
