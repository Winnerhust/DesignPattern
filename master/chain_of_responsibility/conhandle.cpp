#ifndef __COM_C_HANDLE_CPP__
#define __COM_C_HANDLE_CPP__

#include <iostream>
#include "conhandle.h"
using namespace std;

ConHandle::ConHandle()
{	
}
ConHandle::ConHandle(Handle *next)
{
	set_next_handle(next);
}
ConHandle::~ConHandle()
{
}
void ConHandle::option()
{
	cout<<"ConHandle::option"<<endl;

	if (next_handle()!=NULL)
	{
		next_handle()->option();
	}
}
ConHandleA::ConHandleA()
{	
}
ConHandleA::ConHandleA(Handle *next)
{
	set_next_handle(next);
}
ConHandleA::~ConHandleA()
{
}
void ConHandleA::option()
{
	cout<<"ConHandleA::option"<<endl;

	if (next_handle()!=NULL)
	{
		next_handle()->option();
	}

}

ConHandleB::ConHandleB()
{	
}
ConHandleB::ConHandleB(Handle *next)
{
	set_next_handle(next);
}
ConHandleB::~ConHandleB()
{
}
void ConHandleB::option()
{
	cout<<"ConHandleB::option"<<endl;

	if (next_handle()!=NULL)
	{
		next_handle()->option();
	}

}
#endif
