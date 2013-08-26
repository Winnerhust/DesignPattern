#ifndef __FLYWEIGHT_FLYWEIGHT_H__
#define __FLYWEIGHT_FLYWEIGHT_H__

#include <string>
using namespace std;
class Flyweight
{
public:
        ~Flyweight();
        virtual void option(const string & s);
        string getstate();
protected:
        Flyweight(const string &s);

private:
        string m_state;

};
class ConFlyweight: public Flyweight
{
public:
        ConFlyweight(const string & s);
        ~ConFlyweight();

        void option(const string & s);
};

#endif
