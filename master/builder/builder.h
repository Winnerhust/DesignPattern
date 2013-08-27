#ifndef __BUILDER_BUILDER_H__
#define __BUILDER_BUILDER_H__

#include "product.h"
#include <string>
using namespace std;
class Builder
{
public:
        virtual ~Builder();
        virtual void builderpartA(const string &s)=0;
        virtual void builderpartB(const string &s)=0;
        virtual void builderpartC(const string &s)=0;
        virtual Product * getproduct()=0;
protected:
        Builder();      
};
class ConBuilder: public Builder
{
public:
        ConBuilder();
        ~ConBuilder();

        void builderpartA(const string &s);
        void builderpartB(const string &s);
        void builderpartC(const string &s);
        Product *getproduct();

};
#endif
