#ifndef __COMOBSEVER__H__
#define __COMOBSEVER__H__

#include <iostream>
#include <string>
#include "subject.h"
using namespace std;
typedef string State;
class Subject;
class Obsever
{
public:
        virtual ~Obsever();

        virtual void update(Subject *subject)=0;
        virtual void printinfo()=0;
protected:
        Obsever();

        State state;
};
class ConObsever:public Obsever
{
public:
        ConObsever(Subject *subject);
        ~ConObsever();
        virtual Subject *getsubject();
        void update(Subject *subject);
        void printinfo();
private:
        Subject *sub;
};
class ConObseverA:public Obsever
{
public:
        ConObseverA(Subject *subject);
        ~ConObseverA();

        virtual Subject *getsubject();
        void update(Subject *subject);
        void printinfo();
private:
        Subject *sub;
};
#endif
