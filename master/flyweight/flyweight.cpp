#ifndef __FLYWEIGHT_FLYWEIGHT_CPP__
#define __FLYWEIGHT_FLYWEIGHT_CPP__
#include "flyweight.h"
#include <iostream>
using namespace std;
Flyweight::Flyweight(const string &s)
:m_state(s)
{
}
Flyweight::~Flyweight()
{
        cout<<"Flyweight["<<getstate()<<"]"<<" is deleted"<<endl;
}
string Flyweight::getstate()
{
        return m_state;
}
void Flyweight::option(const string &s)
{
}
ConFlyweight::ConFlyweight(const string &s)
:Flyweight(s)
{
}
ConFlyweight::~ConFlyweight()
{
        cout<<"ConFlyweight["<<getstate()<<"]"<<" is deleted"<<endl;
}
void ConFlyweight::option(const string &s)
{
        cout<<"ConFlyweight::"<<getstate()<<" ["<<s<<"]"<<endl;
}
#endif
