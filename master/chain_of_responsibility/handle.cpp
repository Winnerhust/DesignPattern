#ifndef __COMHANDLE_CPP__
#define __COMHANDLE_CPP__

#include <iostream>
#include "handle.h"

Handle::Handle()
:m_next(NULL)
{
}
Handle::Handle(Handle *next)
:m_next(next)
{
}
Handle::~Handle()
{
}
void Handle:: set_next_handle(Handle *next)
{
	m_next=next;
}
Handle *Handle::next_handle()
{
	return m_next;
}

#endif
