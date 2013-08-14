#ifndef __COMSUBJECT__H__
#define __COMSUBJECT__H__ 

#include <iostream>
#include <string>
#include <list>
#include "obsever.h"
using namespace std;

typedef string State;
class Obsever;
class Subject
{
        public:
                virtual ~Subject();

                virtual void attach(Obsever *obs);
                virtual void detach(Obsever *obs);
                virtual void notify();
                virtual State getstate()=0;
                virtual void setstate(const State & state)=0;
        protected:
                Subject();
        private:
                list<Obsever *> *obsevers;
};

class ConSubject: public Subject
{
        public:
                ConSubject();
                ~ConSubject();

                State getstate();
                void setstate(const State & state);
        private:
                State state;
};

#endif
