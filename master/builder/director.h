#ifndef __BUILDER_DIRECTOR_H__
#define __BUILDER_DIRECTOR_H__

#include "builder.h"

class Director
{
public:
        Director(Builder *);
        ~Director();
        
        void Construct();
private:
        Builder *m_builder;

};

#endif
