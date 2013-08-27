#ifndef __BUILDER_BUILDER_CPP__
#define __BUILDER_BUILDER_CPP__
#include "builder.h"
#include <iostream>
using namespace std;
Builder::Builder()
{
}

Builder::~Builder()
{
}
ConBuilder::ConBuilder()
{
}
ConBuilder::~ConBuilder()
{
}
void ConBuilder::builderpartA(const string &s)
{
        cout<<"builderpartA"<<endl;
}
void ConBuilder::builderpartB(const string &s)
{
        cout<<"builderpartB"<<endl;
}
void ConBuilder::builderpartC(const string &s)
{
        cout<<"builderpartC"<<endl;
}
Product *ConBuilder::getproduct()
{
        builderpartA("pre-definded");
        builderpartB("pre-definded");
        builderpartC("pre-definded");
        
        return new Product();
}
#endif
