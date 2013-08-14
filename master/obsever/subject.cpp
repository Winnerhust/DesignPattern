#ifndef __COMSUBJECT_CPP__
#define __COMSUBJECT_CPP__
#include <iostream>
#include <string>
#include <list>
#include "subject.h"
using namespace std;

Subject::Subject()
{
        obsevers = new list<Obsever *>;
}
Subject::~Subject()
{
        delete obsevers;
}
void Subject::attach(Obsever * obs)
{
        if (obs!=NULL){
                obsevers->push_front(obs);              
        }
}
void Subject::detach(Obsever *obs)
{
        if (obs!=NULL){
                obsevers->remove(obs);
        }
}
void Subject::notify()
{
        list<Obsever *>::iterator i;
        for (i = obsevers->begin(); i != obsevers->end(); ++i){
                (*i)->update(this);
        }
}

ConSubject::ConSubject()
:state("")
{
}
ConSubject::~ConSubject()
{
}

State ConSubject::getstate()
{
        return state;
}
void ConSubject::setstate(const State &state)
{
        this->state=state;
}
#endif
