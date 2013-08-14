#include <iostream>
#include "obsever.h"
#include "subject.h"
using namespace std;

int main(int argc, char const *argv[])
{
        Subject * s = new ConSubject();
        Obsever * obs = new ConObsever(s);
        Obsever * obsa = new ConObseverA(s);

        s->setstate("早报");
        s->notify();

        obs->printinfo();
        obsa->printinfo();

        s->setstate("午报");
        s->notify();

        obs->printinfo();
        obsa->printinfo();

        s->setstate("晚报");
        s->notify();

        obs->printinfo();
        obsa->printinfo();

        return 0;
}
