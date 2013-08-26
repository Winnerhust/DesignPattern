#ifndef __FLYWEIGHT_FLYWEIGHTFACTORY_H__
#define __FLYWEIGHT_FLYWEIGHTFACTORY_H__

#include <string>
#include <map>
#include "flyweight.h"
using namespace std;

class FlyweightFactory
{
public:
        FlyweightFactory();
        ~FlyweightFactory();

        Flyweight *getFlyweight(const string &key);
private:
        map<string ,Flyweight *> flymap;
};

#endif
