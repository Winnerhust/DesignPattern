#ifndef __FLYWEIGHT_FLYWEIGHTFACTORY_CPP__
#define __FLYWEIGHT_FLYWEIGHTFACTORY_CPP__

#include "flyweightfactory.h"
#include <iostream>
using namespace std;
map<string,Flyweight*> flymap;

FlyweightFactory::FlyweightFactory()
{
}
FlyweightFactory::~FlyweightFactory()
{
        map<string,Flyweight*>::iterator it;
        for (it=flymap.begin();it!=flymap.end();it++){
                delete it->second;
        }
        flymap.clear();
}
Flyweight *FlyweightFactory::getFlyweight(const string & key)
{

        if(flymap.find(key)!=flymap.end()){
                cout<<"key=["<<key<<"]  exists"<<endl;
                return flymap[key];
        }

        Flyweight *fly = new ConFlyweight(key);
        flymap[key]=fly;

        return fly;
}
#endif
