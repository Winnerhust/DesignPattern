#ifndef __COMSINGLETON_CPP__
#define __COMSINGLETON_CPP__

#include "singleton.h"

Singleton *Singleton::single=NULL;
Singleton::Singleton()
{
	cout<<"Singleton"<<endl;
}
Singleton::~Singleton()
{
}
Singleton *Singleton::Instance()
{
	if (single==NULL){
		single = new Singleton();
	}

	return single;
}
#endif
