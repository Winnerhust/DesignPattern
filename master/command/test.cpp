#include "command.h"
#include "invoker.h"
#include "recevier.h"

int main(int agrc, char *argv[])
{
        Recevier *rec = new Recevier();
        Command  *cmd = new ConCommand(rec);
        Invoker  *inv = new Invoker(cmd);

        inv->Invoke();

        return 0;
}
