#ifndef __COMOBSEVER_CPP__
#define __COMOBSEVER_CPP__
#include <iostream>
#include <string>
#include "obsever.h"

using namespace std;

Obsever::Obsever()
:state("")
{
}
Obsever::~Obsever()
{
}
ConObsever::ConObsever(Subject *s)
:sub(s)
{
        if (sub!=NULL){
                sub->attach(this);
        }
}
ConObsever::~ConObsever()
{
        if (sub!=NULL){
                sub->detach(this);
                delete sub;
        }
}

Subject* ConObsever::getsubject()
{
        return sub;
}
void ConObsever::printinfo()
{
        cout<<"ConObsever:"<<sub->getstate()<<endl;
}
void ConObsever::update(Subject *s)
{
        state=s->getstate();
        //printinfo();
}
ConObseverA::ConObseverA(Subject *s)
:sub(s)
{
        if (sub!=NULL){
                sub->attach(this);
        }
}
        
ConObseverA::~ConObseverA()
{
        if (sub!=NULL){
                sub->detach(this);
                delete sub;
        }
}
Subject*  ConObseverA::getsubject()
{
        return sub;
}
void ConObseverA::printinfo()
{
        cout<<"ConObseverA:"<<sub->getstate()<<endl;
}
void ConObseverA::update(Subject *s)
{       
        state=s->getstate();
        //printinfo();
}
#endif
