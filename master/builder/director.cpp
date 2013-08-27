#ifndef __BUILDER_DIRECTOR_CPP__
#define __BUILDER_DIRECTOR_CPP__
#include "director.h"
Director::Director(Builder *s)
:m_builder(s)
{
}
Director::~Director()
{
}

void Director::Construct()
{
        m_builder->getproduct();
}

#endif
